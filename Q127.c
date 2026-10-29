/* Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/
#include <stdio.h>

int main() {
    int ch;
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: input.txt does not exist!\n");
        return 1;
    }
    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(fin);
        return 1;
    }
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    printf("Converted text written to output.txt\n");
    return 0;
}