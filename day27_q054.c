// Q54: Write a program to print the following pattern:
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 7; i++) {
        int row = (i <= 4) ? i : 8 - i;
        for (int s = 0; s < 4 - row; s++)
            printf(" ");
        for (int j = 0; j < 2 * row - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
