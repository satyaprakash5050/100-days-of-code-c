// Q43: Write a program to check if a number is a strong number.
// (sum of factorials of its digits equals the number, e.g. 145)
#include <stdio.h>

int main(void) {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        int d = temp % 10, f = 1;
        for (int i = 2; i <= d; i++)
            f *= i;
        sum += f;
        temp /= 10;
    }
    if (n > 0 && sum == n)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");
    return 0;
}
