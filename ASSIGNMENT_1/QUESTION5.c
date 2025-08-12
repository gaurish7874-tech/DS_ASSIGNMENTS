// 5. Sum of Every Row and Column in 2D Array
#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        int row_sum = 0;
        for (j = 0; j < c; j++)
            row_sum += a[i][j];
        printf("Sum of row %d = %d\n", i, row_sum);
    }

    for (j = 0; j < c; j++) {
        int col_sum = 0;
        for (i = 0; i < r; i++)
            col_sum += a[i][j];
        printf("Sum of column %d = %d\n", j, col_sum);
    }

    return 0;
}
