// Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fact = 1;
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }
    for (int i = 2; i <= n; i++)
        fact *= i;
    printf("%llu\n", fact);
    return 0;
}
