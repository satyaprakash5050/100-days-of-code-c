// Q76: Check if a matrix is symmetric.
// Input: rows cols, then the matrix elements row by row
#include <stdio.h>

int main(void) {
    int r, c, m[100][100], symmetric = 1;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    if (r != c) {
        symmetric = 0;
    } else {
        for (int i = 0; i < r && symmetric; i++)
            for (int j = 0; j < i; j++)
                if (m[i][j] != m[j][i]) {
                    symmetric = 0;
                    break;
                }
    }
    printf(symmetric ? "Symmetric\n" : "Not Symmetric\n");
    return 0;
}
