// Q67: Insert an element in an array at a given position.
// Input: n, then n elements, then the element to insert, then the position (1-based)
#include <stdio.h>

int main(void) {
    int n, a[1001], x, pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d %d", &x, &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }
    for (int i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = x;
    n++;
    for (int i = 0; i < n; i++)
        printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    return 0;
}
