// Q93: Check if two strings are anagrams of each other.
// Input: two lines (case and non-letters are ignored)
#include <stdio.h>

int main(void) {
    char s1[1000], s2[1000];
    int count[26] = {0}, anagram = 1;
    fgets(s1, sizeof s1, stdin);
    fgets(s2, sizeof s2, stdin);
    for (int i = 0; s1[i] != '\0'; i++) {
        char c = s1[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c >= 'a' && c <= 'z') count[c - 'a']++;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        char c = s2[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c >= 'a' && c <= 'z') count[c - 'a']--;
    }
    for (int i = 0; i < 26; i++)
        if (count[i] != 0)
            anagram = 0;
    printf(anagram ? "Anagram\n" : "Not Anagram\n");
    return 0;
}
