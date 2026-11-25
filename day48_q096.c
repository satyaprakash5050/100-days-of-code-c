// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';
    int i = 0, len = strlen(s);
    while (i < len) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        int start = i;
        while (i < len && s[i] != ' ')
            i++;
        for (int a = start, b = i - 1; a < b; a++, b--) {
            char t = s[a];
            s[a] = s[b];
            s[b] = t;
        }
    }
    printf("%s\n", s);
    return 0;
}
