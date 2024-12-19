#include "arraycalculate.h"

int findmax(int** arr, int r, int c)
{
    int max = arr[0][0];
    int i,j;
    for (i = 0; i < r; i++)
    {
        for (j=0; j< c; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int find1dmin(int* arr, int r)
{
    int min = arr[0];
    int i,j;
    for (i = 0; i < r; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int findmin(int** arr, int r, int c)
{
    int min = arr[0][0];
    int i,j;
    for (i = 0; i < r; i++)
    {
        for (j=0; j< c; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int findavg(int** arr, int r, int c)
{
    int avg = arr[0][0];
    int i,j;
    for (i = 0; i < r; i++)
    {
        for (j=0; j< c; j++)
        {
            avg += arr[i][j];
        }
    }
    avg = avg/(r*c);
    return avg;
}
bool findvalue(int** arr, int r, int c, int value)
{
    bool present = false;
    int i,j;
    for (i = 0; i < r; i++)
    {
        for (j=0; j< c; j++)
        {
            if(value == arr[i][j])
            {
                present = true;
            }
        }
    }
    if(present)
    {
        return true;
    }
    else
    {
        return false;
    }
}