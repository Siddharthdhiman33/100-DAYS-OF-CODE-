//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    printf("\nDiagonal Traversal (direction):\n");
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    for (int row = 1; row < n; row++) {
        int i = row, j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    return 0;
}