// Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main(void) {
    long long n, sum = 0;
    scanf("%lld", &n);
    for (long long i = 1; i <= n; i++)
        sum += i;
    printf("%lld\n", sum);
    return 0;
}
