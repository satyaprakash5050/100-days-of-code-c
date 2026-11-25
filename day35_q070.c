// Q70: Rotate an array to the right by k positions.
// Input: n, then n elements, then k
#include <stdio.h>

int main(void) {
    int n, a[1000], b[1000], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    k = ((k % n) + n) % n;
    for (int i = 0; i < n; i++)
        b[(i + k) % n] = a[i];
    for (int i = 0; i < n; i++)
        printf("%d%c", b[i], i == n - 1 ? '\n' : ' ');
    return 0;
}
