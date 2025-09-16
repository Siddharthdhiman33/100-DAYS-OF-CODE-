//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int n1, n2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &n2);
    switch(op) {
        case '+':
            printf("Result: %d\n", n1 + n2);
            break;
        case '-':
            printf("Result: %d\n", n1 - n2);
            break;
        case '*':
            printf("Result: %d\n", n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("Result: %d\n", n1 / n2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (n2 != 0)
                printf("Result: %d\n", n1 % n2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}