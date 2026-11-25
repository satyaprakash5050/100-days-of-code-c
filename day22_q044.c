// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
// (first term is 1; term k >= 2 is (2k-1)/(2k))
#include <stdio.h>

int main(void) {
    int n;
    double sum = 0;
    scanf("%d", &n);
    for (int k = 1; k <= n; k++) {
        if (k == 1)
            sum += 1;
        else
            sum += (2.0 * k - 1) / (2.0 * k);
    }
    printf("%.2f\n", sum);
    return 0;
}
