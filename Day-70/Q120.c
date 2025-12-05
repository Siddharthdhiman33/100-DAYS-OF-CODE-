//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);
    if(n>0) {
        s[0] = toupper(s[0]);
        for(int i=1;i<n;i++) {
            s[i] = tolower(s[i]);
        }
    }
    printf("%s", s);
    return 0;
}