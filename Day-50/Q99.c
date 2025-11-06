//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    char input[11]; 
    char output[12];
    int i;
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%10s", input);
    output[0] = input[0];
    output[1] = input[1];
    output[2] = '-';
    output[3] = 'A';
    output[4] = 'p';
    output[5] = 'r';
    output[6] = '-';
    for (i = 0; i < 4; i++) {
        output[7 + i] = input[6 + i];
    }
    output[11] = '\0';
    printf("Formatted date: %s\n", output);
    return 0;
}