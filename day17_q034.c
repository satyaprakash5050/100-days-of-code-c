// Q34: Write a program to check if a number is prime.
#include <stdio.h>

int main(void) {
    long long n;
    int prime = 1;
    scanf("%lld", &n);
    if (n < 2)
        prime = 0;
    for (long long i = 2; i * i <= n && prime; i++)
        if (n % i == 0)
            prime = 0;
    printf(prime ? "Prime\n" : "Not Prime\n");
    return 0;
}
