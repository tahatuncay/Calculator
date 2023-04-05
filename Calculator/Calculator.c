#include <stdio.h>

int main() {
    char operator;
    int n1, n2;

    printf("Please Enter Two Number and Operator (+, -, *, /): ");
    scanf("%d %d %c", &n1, &n2, &operator);

    switch(operator) {
        case '+':
            printf("%d + %d = %d", n1, n2, n1 + n2);
            break;

        case '-':
            printf("%d - %d = %d", n1, n2, n1 - n2);
            break;

        case '*':
            printf("%d * %d = %d", n1, n2, n1 * n2);
            break;

        case '/':
            printf("%d / %d = %d", n1, n2, n1 / n2);
            break;

        default:
            printf("Please Try Again!");
    }

    return 0;
}