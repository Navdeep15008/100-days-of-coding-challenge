/* Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/
#include <stdio.h>

int main() {
    char s[1000];
    int last[256], start = 0, best = 0;
    scanf("%s", s);
    for (int i = 0; i < 256; i++)
        last[i] = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];
        if (last[ch] >= start)
            start = last[ch] + 1;
        last[ch] = i;
        if (i - start + 1 > best)
            best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}