// Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main(void) {
    long long n, temp, sum = 0;
    int digits = 0;
    scanf("%lld", &n);
    temp = n;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = n;
    while (temp > 0) {
        long long d = temp % 10, power = 1;
        for (int i = 0; i < digits; i++)
            power *= d;
        sum += power;
        temp /= 10;
    }
    if (n >= 0 && sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
