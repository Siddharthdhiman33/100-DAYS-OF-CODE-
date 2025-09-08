//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }
    return 0;
}