// Q89: Count frequency of a given character in a string.
// Input: the string (one line), then the character to count
#include <stdio.h>

int main(void) {
    char s[1000], ch;
    int count = 0;
    fgets(s, sizeof s, stdin);
    scanf(" %c", &ch);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if (s[i] == ch)
            count++;
    printf("%d\n", count);
    return 0;
}
