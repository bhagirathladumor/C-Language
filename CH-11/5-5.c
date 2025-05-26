#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    // Calculate the number of rows
    rows = 5;

    for (i = 1; i <= rows; i++) {
        num = i;
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num = num + (rows - j);
        }
        printf("\n");
    }
    return 0;
}