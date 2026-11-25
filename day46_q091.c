// Q91: Remove all vowels from a string.
#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];
        int vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                     c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        if (!vowel)
            printf("%c", c);
    }
    printf("\n");
    return 0;
}
