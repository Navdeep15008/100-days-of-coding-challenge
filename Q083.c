/* Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/
#include <stdio.h>

int main() {
    char s[200];
    int v = 0, c = 0;
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}