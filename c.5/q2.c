#include <stdio.h>

int main() 
{
    int row, col;
    printf("Enter of rows: ");
    scanf("%d", &row);

    printf("Enter of columns: ");
    scanf("%d", &col);

    int a[row][col];
    printf("Enter elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    printf("\nLargest element of array = %d\n", max);
}
