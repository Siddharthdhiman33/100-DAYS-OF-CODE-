//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
    return 0;
}