// Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main(void) {
    long long n, temp, p = 1;
    scanf("%lld", &n);
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        p *= 10;
    }
    long long first = n / p;
    long long last = n % 10;
    long long result;
    if (p == 1)
        result = n;
    else
        result = last * p + (n % p) / 10 * 10 + first;
    printf("%lld\n", result);
    return 0;
}
