// Q83: Count vowels and consonants in a string.
#include <stdio.h>

int main(void) {
    char s[1000];
    int vowels = 0, consonants = 0;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z')
            c = c + 32;
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
