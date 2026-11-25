// Q85: Reverse a string.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
