#include <stdio.h>
#include <stdlib.h>
#define ROW 9
#define COL 9
int main()
{
    int row, col;
    printf("\n");
    for (row = 1; row <= ROW; ++row)
    {
        for (col = 1;col <= COL; col++)
        {
            printf("%d + %d = %d  ", col, row, col + row);
        }
        printf("\n");
    }

    system ("pause");
    return 0;
}