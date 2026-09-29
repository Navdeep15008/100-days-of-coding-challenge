/* Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200];
    int count[256] = {0}, ok = 1;
    scanf("%s", a);
    scanf("%s", b);
    if (strlen(a) != strlen(b))
        ok = 0;
    for (int i = 0; a[i] != '\0'; i++)
        count[(unsigned char)a[i]]++;
    for (int i = 0; b[i] != '\0'; i++)
        count[(unsigned char)b[i]]--;
    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            ok = 0;
    printf(ok ? "Anagrams\n" : "Not anagrams\n");
    return 0;
}