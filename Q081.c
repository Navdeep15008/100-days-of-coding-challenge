/* Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1
*/
#include <stdio.h>

int main() {
    char s[200];
    int len = 0;
    fgets(s, sizeof(s), stdin);
    while (s[len] != '\0' && s[len] != '\n')
        len++;
    printf("%d\n", len);
    return 0;
}