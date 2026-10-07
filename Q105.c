/* Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

Note: Follow-up (optional): Can you do it in O(n) Time Complexity?
*/
#include <stdio.h>

int main() {
    int n, a[100], cand = 0, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            cand = a[i];
            count = 1;
        } else if (a[i] == cand) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == cand)
            count++;
    if (count > n / 2)
        printf("%d\n", cand);
    else
        printf("-1\n");
    return 0;
}