// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.
// Input: n, then n elements   |   prefix/suffix products, O(n), no division
#include <stdio.h>

static int a[100005];
static long long ans[100005];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    long long prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= a[i];
    }
    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= a[i];
    }
    for (int i = 0; i < n; i++)
        printf("%lld%c", ans[i], i == n - 1 ? '\n' : ' ');
    return 0;
}
