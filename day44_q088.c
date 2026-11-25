// Q88: Replace spaces with hyphens in a string.
#include <stdio.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ')
            s[i] = '-';
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
