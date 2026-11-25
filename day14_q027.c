// Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main(void) {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += 2 * i - 1;
    printf("%lld\n", sum);
    return 0;
}
