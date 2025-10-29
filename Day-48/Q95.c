//Check if one string is a rotation of another.
#include <stdio.h>
int strLength(const char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}
int isSubstring(const char *s1, const char *s2) {
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s1[i + j] != '\0' && s1[i + j] == s2[j]; j++);
        if (s2[j] == '\0')
            return 1;
    }
    return 0;
}
int isRotation(const char *s1, const char *s2) {
    int len1 = strLength(s1);
    int len2 = strLength(s2);
    if (len1 != len2 || len1 == 0)
        return 0;
    char temp[2 * len1 + 1];
    int i;
    for (i = 0; i < len1; i++)
        temp[i] = s1[i];
    for (i = 0; i < len1; i++)
        temp[len1 + i] = s1[i];
    temp[2 * len1] = '\0';

    return isSubstring(temp, s2);
}
int main() {
    char str1[] = "waterbottle";
    char str2[] = "erbottlewat";

    if (isRotation(str1, str2))
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    return 0;
}