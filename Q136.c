/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/
#include <stdio.h>
#include <string.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    int a, b;
    enum Choice ch;
    scanf("%s %d %d", op, &a, &b);
    if (strcmp(op, "ADD") == 0)
        ch = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        ch = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        ch = MULTIPLY;
    else {
        printf("Invalid choice\n");
        return 0;
    }
    switch (ch) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }
    return 0;
}