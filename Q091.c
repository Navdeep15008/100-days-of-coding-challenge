/* Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/
#include <stdio.h>

int main() {
    char s[200], r[200];
    int k = 0;
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
            r[k++] = ch;
    }
    r[k] = '\0';
    printf("%s", r);
    return 0;
}