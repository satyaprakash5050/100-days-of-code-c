// Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main(void) {
    char s[1000];
    int spaces = 0, digits = 0, special = 0;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];
        if (c == ' ')
            spaces++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            special++;
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    return 0;
}
