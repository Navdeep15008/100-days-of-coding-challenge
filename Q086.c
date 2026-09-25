/* Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int pal = 1;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s);
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            pal = 0;
            break;
        }
    }
    printf(pal ? "Palindrome\n" : "Not palindrome\n");
    return 0;
}