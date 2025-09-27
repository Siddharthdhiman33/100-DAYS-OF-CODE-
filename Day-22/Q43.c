//Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}
int main() {
    int num, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);
    return 0;
}