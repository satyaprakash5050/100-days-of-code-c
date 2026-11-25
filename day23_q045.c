// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
// (term k is 2k / (4k - 1))
#include <stdio.h>

int main(void) {
    int n;
    double sum = 0;
    scanf("%d", &n);
    for (int k = 1; k <= n; k++)
        sum += (2.0 * k) / (4.0 * k - 1);
    printf("%.2f\n", sum);
    return 0;
}
