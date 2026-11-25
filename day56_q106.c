// Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
//
// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.
// Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.
// Input: n, then n elements
#include <stdio.h>

static int a[100005];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int ans = -1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                ans = a[j];
                break;
            }
        }
        printf("%d%s", ans, i == n - 1 ? "\n" : ",");
    }
    return 0;
}
