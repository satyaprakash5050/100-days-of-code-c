// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
// Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
// Idea: sum(1..x) = sum(x..n)  <=>  x*x = n*(n+1)/2   (solved with binary search, O(log n))
#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    long long total = n * (n + 1) / 2;
    long long low = 1, high = n, ans = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sq = mid * mid;
        if (sq == total) {
            ans = mid;
            break;
        } else if (sq < total) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
