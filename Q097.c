/* Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32;
            printf("%c.", ch);
        }
    }
    printf("\n");
    return 0;
}