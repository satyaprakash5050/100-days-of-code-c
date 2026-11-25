// Q39: Write a program to find the product of odd digits of a number.
// (prints 0 if the number has no odd digit)
#include <stdio.h>

int main(void) {
    long long n, product = 1;
    int found = 0;
    scanf("%lld", &n);
    if (n < 0)
        n = -n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 1) {
            product *= d;
            found = 1;
        }
        n /= 10;
    }
    printf("%lld\n", found ? product : 0);
    return 0;
}
