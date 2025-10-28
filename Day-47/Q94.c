//Find the longest word in a sentence.
#include <stdio.h>
int main() {
    char sentence[200];
    char longest[50];
    int maxLen = 0, currLen = 0;
    int i = 0, start = 0, longestStart = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                longestStart = start;
            }
            currLen = 0;
        }
        i++;
    }
    for (i = 0; i < maxLen; i++) {
        longest[i] = sentence[longestStart + i];
    }
    longest[i] = '\0';
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}