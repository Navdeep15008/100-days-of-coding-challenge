/* Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200], temp[400];
    scanf("%s", a);
    scanf("%s", b);
    if (strlen(a) == strlen(b)) {
        strcpy(temp, a);
        strcat(temp, a);
        if (strstr(temp, b) != NULL) {
            printf("Rotation\n");
            return 0;
        }
    }
    printf("Not rotation\n");
    return 0;
}