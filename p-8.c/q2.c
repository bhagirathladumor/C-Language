#include <stdio.h>

int cube(int *a){
    return  *a * *a * *a;
}

main()
{
    int row;
    int col;

    printf("enter row size\n");
    scanf("%d", &row);

    printf("enter col size\n");
    scanf("%d", &col);

    int a[row][col];
    int *ptr[row][col];
    ptr[row][col] = &a[row][col];

    printf("enter your value %d \n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nyour array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ptr[i][j] = &a[i][j];
            printf("%d\t", *ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n\nyour cube\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
            printf("%d\t",cube(&a[i][j]));
        }
        printf("\n");
    }
}
