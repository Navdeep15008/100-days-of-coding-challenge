/* Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, top = 0;
    struct Student s[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[top].marks)
            top = i;
    }
    printf("Topper: %s (Marks: %d)\n", s[top].name, s[top].marks);
    return 0;
}