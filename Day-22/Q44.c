//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    int num = 1, den = 2;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 2;
    }
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}