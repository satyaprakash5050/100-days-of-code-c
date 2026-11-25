// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
// Input: n, then n elements, then k   |   monotonic deque, O(n)
#include <stdio.h>

static int a[100005], dq[100005];

int main(void) {
    int n, k, head = 0, tail = 0, first = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (head < tail && dq[head] <= i - k)
            head++;
        while (head < tail && a[dq[tail - 1]] <= a[i])
            tail--;
        dq[tail++] = i;
        if (i >= k - 1) {
            if (!first)
                printf(" ");
            printf("%d", a[dq[head]]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
