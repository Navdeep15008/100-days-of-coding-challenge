/* Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include <stdio.h>

int main() {
    double p, r, t, amount, si, ci;
    scanf("%lf %lf %lf", &p, &r, &t);
    si = p * r * t / 100;
    amount = p;
    for (int i = 0; i < (int)t; i++)
        amount = amount * (1 + r / 100);
    ci = amount - p;
    printf("Simple Interest=%g, Compound Interest=%g\n", si, ci);
    return 0;
}