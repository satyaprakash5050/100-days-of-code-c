// Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int len = strlen(s), palindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            palindrome = 0;
            break;
        }
    }
    printf(palindrome ? "Palindrome\n" : "Not a Palindrome\n");
    return 0;
}
