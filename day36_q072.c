// Q72: Find the sum of all elements in a matrix.
// Input: rows cols, then the matrix elements row by row
#include <stdio.h>

int main(void) {
    int r, c, m[100][100];
    long long sum = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            sum += m[i][j];
        }
    }
    printf("%lld\n", sum);
    return 0;
}
