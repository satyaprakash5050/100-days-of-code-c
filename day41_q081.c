// Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>

int main(void) {
    char s[1000];
    int count = 0;
    fgets(s, sizeof s, stdin);
    while (s[count] != '\0' && s[count] != '\n')
        count++;
    printf("%d\n", count);
    return 0;
}
