// Q71: Read and print a matrix.
// Input: rows cols, then the matrix elements row by row
#include <stdio.h>

int main(void) {
    int r, c, m[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d%c", m[i][j], j == c - 1 ? '\n' : ' ');
    }
    return 0;
}
