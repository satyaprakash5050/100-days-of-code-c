// Q69: Find the second largest element in an array.
// Input: n, then n elements
#include <stdio.h>

int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int first = a[0], second = 0, hasSecond = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > first) {
            second = first;
            hasSecond = 1;
            first = a[i];
        } else if (a[i] < first && (!hasSecond || a[i] > second)) {
            second = a[i];
            hasSecond = 1;
        }
    }
    if (hasSecond)
        printf("%d\n", second);
    else
        printf("No second largest element\n");
    return 0;
}
