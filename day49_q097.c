// Q97: Print the initials of a name.
// Example: Soumik Kumar Maity -> S.K.M.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[1000];
    fgets(name, sizeof name, stdin);
    name[strcspn(name, "\n")] = '\0';
    for (char *w = strtok(name, " \t"); w != NULL; w = strtok(NULL, " \t"))
        printf("%c.", toupper((unsigned char)w[0]));
    printf("\n");
    return 0;
}
