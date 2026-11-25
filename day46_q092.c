// Q92: Find the first repeating lowercase alphabet in a string.
// (the first character whose second occurrence appears earliest while scanning left to right)
#include <stdio.h>

int main(void) {
    char s[1000];
    int seen[26] = {0};
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (seen[s[i] - 'a']) {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[s[i] - 'a'] = 1;
        }
    }
    printf("No repeating lowercase alphabet\n");
    return 0;
}
