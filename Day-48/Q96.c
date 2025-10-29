//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void reverseWords(char *str) {
    int i = 0, start = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }
    reverse(str, start, i - 1);
}
int main() {
    char sentence[] = "hello world from copilot";
    reverseWords(sentence);
    printf("Reversed words: %s\n", sentence);
    return 0;
}