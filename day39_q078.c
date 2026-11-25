// Q78: Find the sum of main diagonal elements for a square matrix.
// Input: n (square matrix n x n), then the matrix elements row by row
#include <stdio.h>

int main(void) {
    int n, m[100][100];
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    for (int i = 0; i < n; i++)
        sum += m[i][i];
    printf("%lld\n", sum);
    return 0;
}
