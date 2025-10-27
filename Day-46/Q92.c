//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0}, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}