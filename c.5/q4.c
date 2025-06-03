#include <stdio.h>

int main()
{
    int c, r,colsum=0,rowsum=0;
    
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter number of rows: ");
    scanf("%d", &r);

    int a[r][c];

    printf("Enter number of elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nSum of row:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) 
        {
            rowsum += a[i][j];
        }
        printf("Row %d sum = %d\n", i, rowsum);
    }
    printf("\nSum of column:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) 
        {
           colsum += a[i][j];
        }
        printf("Column %d sum = %d\n", j, colsum);
    }
}
