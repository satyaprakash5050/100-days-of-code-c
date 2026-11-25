// Q66: Insert an element in a sorted array at the appropriate position.
// Input: n, then n elements in ascending order, then the element to insert
#include <stdio.h>

int main(void) {
    int n, a[1001], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    int i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;
    for (int k = 0; k < n; k++)
        printf("%d%c", a[k], k == n - 1 ? '\n' : ' ');
    return 0;
}
