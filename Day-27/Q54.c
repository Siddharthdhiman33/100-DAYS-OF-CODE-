//rite a program to print the following pattern:
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
#include <stdio.h>
int main() {
    int i, j, space;
    int n = 4;
    for (i = 0; i < n; i++) {
        space = n - i - 1;
        for (j = 0; j < space; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 2; i >= 0; i--) {
        space = n - i - 1;
        for (j = 0; j < space; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}