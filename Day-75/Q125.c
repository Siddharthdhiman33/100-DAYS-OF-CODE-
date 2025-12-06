//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char newLine[256];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter a new line of text: ");
    getchar(); // consume newline left by scanf
    fgets(newLine, sizeof(newLine), stdin);
    fprintf(fp, "%s", newLine);
    fclose(fp);
    printf("Text successfully appended to %s\n", filename);
    return 0;
}