// Q64: Find the digit that occurs the most times in an integer number.
// (if two digits tie, the smaller digit is printed)
#include <stdio.h>

int main(void) {
    long long n;
    int count[10] = {0};
    scanf("%lld", &n);
    if (n < 0)
        n = -n;
    do {
        count[n % 10]++;
        n /= 10;
    } while (n > 0);
    int best = 0;
    for (int d = 1; d < 10; d++)
        if (count[d] > count[best])
            best = d;
    printf("%d\n", best);
    return 0;
}
