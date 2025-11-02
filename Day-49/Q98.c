//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    int i = 0;
    if (isalpha(name[i])) {
        printf("%c. ", toupper(name[i]));
    }
    char surname[50];
    int surname_index = 0;
    int last_space = -1;
    while (name[i] != '\0') {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c. ", toupper(name[i + 1]));
            last_space = i;
        }
        i++;
    }
    if (last_space != -1) {
        strcpy(surname, name + last_space + 1);
        surname[strcspn(surname, "\n")] = '\0';
        printf("%s\n", surname);
    }
    return 0;
}