// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
// Follow-up (optional): Can you do it in O(n) Time Complexity?
// Input: n, then n elements   |   Boyer-Moore voting + verification
#include <stdio.h>

static int a[100005];

int main(void) {
    int n, candidate = 0, votes = 0, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = a[i];
            votes = 1;
        } else if (a[i] == candidate) {
            votes++;
        } else {
            votes--;
        }
    }
    for (int i = 0; i < n; i++)
        if (a[i] == candidate)
            count++;
    if (n > 0 && count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");
    return 0;
}
