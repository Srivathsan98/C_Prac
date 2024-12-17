#include "arrayprint.h"

void print1darray(int* arr, int row)
{
    int i;
    for (i = 0; i < row; i++)
    {
        printf("%d", arr[i]);
        printf("\t");
    }            
}
void print2darray(int** arr, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        if(i != 0)
        {
            printf("\n");
        }
        for (j=0; j< col; j++)
        {
            if(j != 0)
            {
                printf("\t");
            }
            printf("%d", arr[i][j]);
        }
    }
}