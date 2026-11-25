// Q68: Delete an element from an array.
// Input: n, then n elements, then the position (1-based) of the element to delete
#include <stdio.h>

int main(void) {
    int n, a[1000], pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }
    for (int i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    for (int i = 0; i < n; i++)
        printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    if (n == 0)
        printf("\n");
    return 0;
}
