// Q74: Find the transpose of a matrix.
// Input: rows cols, then the matrix elements row by row
#include <stdio.h>

int main(void) {
    int r, c, m[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++)
            printf("%d%c", m[i][j], i == r - 1 ? '\n' : ' ');
    }
    return 0;
}
