//Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], rotated[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}