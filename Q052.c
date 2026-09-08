/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.
*/
#include <stdio.h>

int main() {
    int counts[] = {1, 3, 5, 3, 1};
    for (int i = 0; i < 5; i++) {
        printf("\n");
        for (int j = 0; j < counts[i]; j++)
            printf("*\n");
    }
    return 0;
}