// Q80: Multiply two matrices.
// Input: r1 c1, matrix A, r2 c2, matrix B (row by row)
#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2, a[50][50], b[50][50];
    long long res[50][50];
    scanf("%d %d", &r1, &c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d", &r2, &c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
                res[i][j] += (long long)a[i][k] * b[k][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%lld%c", res[i][j], j == c2 - 1 ? '\n' : ' ');
    }
    return 0;
}
