// Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    printf("%lld\n", a);
    return 0;
}
