//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int binary, digit, result = 0, place = 1;
    printf("Enter a binary number (up to 9 digits): ");
    scanf("%d", &binary);
    while (binary > 0) {
        digit = binary % 10;
        if (digit == 0)
            result += 1 * place;
        else if (digit == 1)
            result += 0 * place;
        else {
            printf("Invalid binary digit detected.\n");
            return 1;
        }
        binary /= 10;
        place *= 10;
    }
    printf("1's Complement: %d\n", result);
    return 0;
}