// Q73: Find the sum of each row of a matrix and store it in an array.
// Input: rows cols, then the matrix elements row by row
#include <stdio.h>

int main(void) {
    int r, c, m[100][100];
    long long rowSum[100] = {0};
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            rowSum[i] += m[i][j];
        }
    }
    for (int i = 0; i < r; i++)
        printf("Sum of row %d: %lld\n", i + 1, rowSum[i]);
    return 0;
}
