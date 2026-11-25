// Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>

int main(void) {
    long long n, temp, rev = 0;
    scanf("%lld", &n);
    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (n >= 0 && rev == n)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}
