/* Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    int start = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s);
    for (int i = 0; i <= n; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            for (int l = start, r = i - 1; l < r; l++, r--) {
                char t = s[l];
                s[l] = s[r];
                s[r] = t;
            }
            start = i + 1;
        }
    }
    printf("%s\n", s);
    return 0;
}