/* Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int last = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s);
    while (n > 0 && s[n - 1] == ' ')
        s[--n] = '\0';
    for (int i = 0; i < n; i++)
        if (s[i] == ' ')
            last = i + 1;
    for (int i = 0; i < last; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32;
            printf("%c.", ch);
        }
    }
    if (last > 0)
        printf(" ");
    printf("%s\n", s + last);
    return 0;
}