//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, first, last, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        count++;
    }
    first = temp;
    if (count == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
    int divisor = 1;
    for (int i = 0; i < count; i++) {
        divisor *= 10;
    }
    int middle = num % divisor;  
    middle /= 10;                
    int swapped = last * divisor + middle * 10 + first;
    printf("Swapped number: %d\n", swapped);
    return 0;
}