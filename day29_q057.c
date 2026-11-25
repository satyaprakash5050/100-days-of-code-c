// Q57: Find the sum of array elements.
// Input: n, then n elements
#include <stdio.h>

int main(void) {
    int n, a[1000];
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%lld\n", sum);
    return 0;
}
