// Q95: Check if one string is a rotation of another.
// Input: two lines
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[1000], b[1000], doubled[2001];
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    strcpy(doubled, a);
    strcat(doubled, a);
    if (strlen(a) == strlen(b) && strstr(doubled, b) != NULL)
        printf("Rotation\n");
    else
        printf("Not a rotation\n");
    return 0;
}
