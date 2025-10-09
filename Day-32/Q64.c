//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;
    int digit, freq[10] = {0}, maxFreq = 0, mostFreqDigit = 0;
    printf("Enter an integer number: ");
    scanf("%lld", &num);
    while (num != 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }
    printf("Digit that occurs most: %d (appears %d times)\n", mostFreqDigit, maxFreq);
    return 0;
}