/* Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/
#include <stdio.h>

int main() {
    int n;
    long long bin = 0, place = 1;
    scanf("%d", &n);
    while (n > 0) {
        bin += (n % 2) * place;
        place *= 10;
        n /= 2;
    }
    printf("%lld\n", bin);
    return 0;
}