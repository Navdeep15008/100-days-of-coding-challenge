/* Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>

int main() {
    int n, last, first, temp, p = 1;
    scanf("%d", &n);
    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        p *= 10;
    }
    first = temp;
    n = n - first * p - last + last * p + first;
    printf("%d\n", n);
    return 0;
}