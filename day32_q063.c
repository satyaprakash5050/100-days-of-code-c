// Q63: Merge two arrays.
// Input: n1, n1 elements, n2, n2 elements
#include <stdio.h>

int main(void) {
    int n1, n2, a[1000], b[1000], c[2000];
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    int k = 0;
    for (int i = 0; i < n1; i++)
        c[k++] = a[i];
    for (int i = 0; i < n2; i++)
        c[k++] = b[i];
    for (int i = 0; i < k; i++)
        printf("%d%c", c[i], i == k - 1 ? '\n' : ' ');
    return 0;
}
