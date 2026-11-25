// Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int main(void) {
    long long a, b, x, y;
    scanf("%lld %lld", &a, &b);
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    x = a;
    y = b;
    while (y != 0) {
        long long t = y;
        y = x % y;
        x = t;
    }
    printf("%lld\n", x == 0 ? 0 : a / x * b);
    return 0;
}
