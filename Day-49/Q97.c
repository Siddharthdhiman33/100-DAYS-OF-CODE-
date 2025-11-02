//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    int i = 0;
    if (isalpha(name[i])) {
        printf("%c", toupper(name[i]));
    }
    while (name[i] != '\0') {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }
    printf("\n");
    return 0;
}