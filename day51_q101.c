// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
// Follow-up(optional): Can you do it in O(log n) Time Complexity?
// Input: n, then n elements (sorted), then target   |   Output: first_index last_index
#include <stdio.h>

static int a[100005];

int main(void) {
    int n, target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &target);

    int first = -1, last = -1;
    int low = 0, high = n - 1;
    while (low <= high) {                 // binary search for the first occurrence
        int mid = low + (high - low) / 2;
        if (a[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    low = 0;
    high = n - 1;
    while (low <= high) {                 // binary search for the last occurrence
        int mid = low + (high - low) / 2;
        if (a[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("%d %d\n", first, last);
    return 0;
}
