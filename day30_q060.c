// Q60: Count positive, negative, and zero elements in an array.
// Input: n, then n elements
#include <stdio.h>

int main(void) {
    int n, a[1000], pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);
    return 0;
}
