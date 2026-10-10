/* Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

Note: Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.
*/
#include <stdio.h>

int main() {
    int n, a[100], ans[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= a[i];
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= a[i];
    }
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i > 0)
            printf(",");
        printf("%d", ans[i]);
    }
    printf("]\n");
    return 0;
}