/* Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/
#include <stdio.h>

int main() {
    int r, c, a[10][10], sym = 1;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    if (r != c)
        sym = 0;
    for (int i = 0; i < r && sym; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != a[j][i]) {
                sym = 0;
                break;
            }
    printf(sym ? "True\n" : "False\n");
    return 0;
}