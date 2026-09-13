/* Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/
#include <stdio.h>

int main() {
    int n, a[100], key, idx = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            idx = i;
            break;
        }
    }
    if (idx == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", idx);
    return 0;
}