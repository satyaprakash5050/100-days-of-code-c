// Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    unsigned int u = (unsigned int)n;
    if (u == 0) {
        printf("0\n");
        return 0;
    }
    int started = 0;
    for (int i = 31; i >= 0; i--) {
        int bit = (u >> i) & 1;
        if (bit)
            started = 1;
        if (started)
            printf("%d", bit);
    }
    printf("\n");
    return 0;
}
