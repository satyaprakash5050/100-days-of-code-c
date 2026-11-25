// Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main(void) {
    long long n, sum = 0;
    scanf("%lld", &n);
    for (long long i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    if (n > 1 && sum == n)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
    return 0;
}
