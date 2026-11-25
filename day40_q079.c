// Q79: Perform diagonal traversal of a matrix.
// Input: rows cols, then the matrix elements row by row
// Output: one diagonal (running from top-right to bottom-left) per line
#include <stdio.h>

int main(void) {
    int r, c, m[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    for (int s = 0; s <= r + c - 2; s++) {
        int start = (s - c + 1 > 0) ? s - c + 1 : 0;
        int end = (s < r - 1) ? s : r - 1;
        for (int i = start; i <= end; i++)
            printf("%d%c", m[i][s - i], i == end ? '\n' : ' ');
    }
    return 0;
}
