/* Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    struct Employee e[100], r[100];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name, id and salary of employee %d: ", i + 1);
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }
    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int count = fread(r, sizeof(struct Employee), 100, fp);
    fclose(fp);
    printf("\nEmployee data read from file:\n");
    for (int i = 0; i < count; i++)
        printf("Name: %s | ID: %d | Salary: %.2f\n", r[i].name, r[i].id, r[i].salary);
    return 0;
}