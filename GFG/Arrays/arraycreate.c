#include "arraycreate.h"

int* create1dArray(int a)
{
    int *arr = (int *)malloc(a * sizeof(int));

    int value = 1;
     for (int i = 0; i < a; i++)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}
int** create2dArray(int a, int b)
{
    int **arr = (int **)malloc(a * sizeof(int *));
    for(int i = 0; i < a; i++)
    {
        arr[i] = (int *)malloc(b * sizeof(int));
    }

    int value = 1;
     for (int i = 0; i < a; i++)
    {
        for (int j=0; j< b; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
    return arr;
}