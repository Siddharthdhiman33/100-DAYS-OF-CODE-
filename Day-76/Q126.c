//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char buffer[256];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}