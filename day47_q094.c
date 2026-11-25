// Q94: Find the longest word in a sentence.
// (a word is a run of letters/digits; if there is a tie, the first one is printed)
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    int bestStart = 0, bestLen = 0, i = 0;
    fgets(s, sizeof s, stdin);
    while (s[i] != '\0') {
        if (isalnum((unsigned char)s[i])) {
            int start = i;
            while (isalnum((unsigned char)s[i]))
                i++;
            if (i - start > bestLen) {
                bestLen = i - start;
                bestStart = start;
            }
        } else {
            i++;
        }
    }
    printf("%.*s\n", bestLen, s + bestStart);
    return 0;
}
