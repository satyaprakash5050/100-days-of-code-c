// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int s = 0; s < 5 - i; s++)
            printf(" ");
        for (int j = 6 - i; j <= 5; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
