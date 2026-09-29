/* Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[500], longest[200] = "", word[200];
    int k = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (int i = 0; ; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            word[k++] = s[i];
        } else {
            word[k] = '\0';
            if (k > (int)strlen(longest))
                strcpy(longest, word);
            k = 0;
            if (s[i] == '\0')
                break;
        }
    }
    printf("%s\n", longest);
    return 0;
}