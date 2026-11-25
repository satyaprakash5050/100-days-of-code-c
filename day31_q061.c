// Q61: Search for an element in an array using linear search.
// Input: n, then n elements, then the element to search
#include <stdio.h>

int main(void) {
    int n, a[1000], key, index = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            index = i;
            break;
        }
    }
    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", index);
    return 0;
}
