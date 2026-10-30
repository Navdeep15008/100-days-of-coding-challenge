/* Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/
#include <stdio.h>

int main() {
    int ch, v = 0, c = 0;
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}