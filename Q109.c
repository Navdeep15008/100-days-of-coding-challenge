/* Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[] = [100, 200, 300, 400], k = 2
Output 1:
700

Input 2:
arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output 2:
39

Input 3:
arr[] = [100, 200, 300, 400], k = 1
Output 3:
400
*/
#include <stdio.h>

int main() {
    int n, a[100], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];
    int max = sum;
    for (int i = k; i < n; i++) {
        sum += a[i] - a[i - k];
        if (sum > max)
            max = sum;
    }
    printf("%d\n", max);
    return 0;
}