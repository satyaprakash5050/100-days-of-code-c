// Q40: Write a program to find the 1’s complement of a binary number and print it.
// Input: a binary number such as 1010  ->  Output: 0101
#include <stdio.h>

int main(void) {
    long long n, temp, complement = 0, place = 1;
    int digits = 0;
    scanf("%lld", &n);
    temp = n;
    do {
        int d = temp % 10;
        complement += (1 - d) * place;
        place *= 10;
        temp /= 10;
        digits++;
    } while (temp > 0);
    printf("%0*lld\n", digits, complement);
    return 0;
}
