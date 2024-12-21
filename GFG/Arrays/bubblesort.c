#include "bubblesort.h"

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int** bubblesort(int **arr, int row, int col)
{
    int total = row * col;
    int row1, col1, row2, col2;
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i -1; j++)
        {
            row1 = j / col;
            col1 = j % col;
            row2 = (j + 1)/col;
            col2 = (j + 1) % col;
            printf("\nrow1 = %d, row2 = %d\ncol1=%d, col2=%d\n", row1, row2, col1, col2); 
            if(arr[row1][col1] > arr[row2][col2])
            {
                swap(&arr[row1][col1], &arr[row2][col2]);
            }
        }
    }
}