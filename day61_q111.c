// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
// Input: n, then n elements, then k   |   queue of negative indices, O(n)
#include <stdio.h>

static int a[100005], q[100005];

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
        if (a[i] < 0)
            q[tail++] = i;
        if (i >= k - 1) {
            while (head < tail && q[head] <= i - k)
                head++;
            if (!first)
                printf(" ");
            printf("%d", head < tail ? a[q[head]] : 0);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
