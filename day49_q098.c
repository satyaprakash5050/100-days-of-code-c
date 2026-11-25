// Q98: Print initials of a name with the surname displayed in full.
// Example: Soumik Kumar Maity -> S. K. Maity
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[1000], *words[100];
    int count = 0;
    fgets(name, sizeof name, stdin);
    name[strcspn(name, "\n")] = '\0';
    for (char *w = strtok(name, " \t"); w != NULL && count < 100; w = strtok(NULL, " \t"))
        words[count++] = w;
    for (int i = 0; i < count - 1; i++)
        printf("%c. ", toupper((unsigned char)words[i][0]));
    if (count > 0)
        printf("%s", words[count - 1]);
    printf("\n");
    return 0;
}
