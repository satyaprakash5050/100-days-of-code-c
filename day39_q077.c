// Q77: Check if the elements on the diagonal of a matrix are distinct.
// Input: n (square matrix n x n), then the matrix elements row by row
#include <stdio.h>

int main(void) {
    int n, m[100][100], distinct = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    for (int i = 0; i < n && distinct; i++)
        for (int j = i + 1; j < n; j++)
            if (m[i][i] == m[j][j]) {
                distinct = 0;
                break;
            }
    if (distinct)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");
    return 0;
}
