// Q100: Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        for (int len = 1; i + len <= n; len++)
            printf("%.*s\n", len, s + i);
    return 0;
}
