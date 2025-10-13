//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int arr[100], n, pos, value;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);
    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++; 
    printf("Updated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}