// Q65: Search in a sorted array using binary search.
// Input: n, then n elements in ascending order, then the element to search
#include <stdio.h>

int main(void) {
    int n, a[1000], key;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    int low = 0, high = n - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) {
            index = mid;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", index);
    return 0;
}
