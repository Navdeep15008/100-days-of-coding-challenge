/* Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[100], first = INT_MIN, second = INT_MIN;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }
    if (second == INT_MIN)
        printf("No second largest element\n");
    else
        printf("%d\n", second);
    return 0;
}