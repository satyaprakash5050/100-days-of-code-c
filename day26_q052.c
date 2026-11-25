// Q52: Write a program to print the following pattern:
// (groups of 1, 3, 5, 3 and 1 stars - one star per line - separated by a blank line)
//
// *
//
// *
// *
// *
//
// *
// *
// *
// *
// *
//
// *
// *
// *
//
// *
#include <stdio.h>

int main(void) {
    int groups[] = {1, 3, 5, 3, 1};
    for (int g = 0; g < 5; g++) {
        if (g > 0)
            printf("\n");
        for (int i = 0; i < groups[g]; i++)
            printf("*\n");
    }
    return 0;
}
