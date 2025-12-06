//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
int main() {
    int choice, a, b, result;
    enum Menu m;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    m = choice;
    switch(m) {
        case ADD:
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}