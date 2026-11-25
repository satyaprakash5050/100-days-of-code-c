// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
// Input: n, then n elements, then k   |   sliding window, O(n)
#include <stdio.h>

static int a[100005];

int main(void) {
    int n, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }
    long long window = 0, best;
    for (int i = 0; i < k; i++)
        window += a[i];
    best = window;
    for (int i = k; i < n; i++) {
        window += a[i] - a[i - k];
        if (window > best)
            best = window;
    }
    printf("%lld\n", best);
    return 0;
}
