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

bool find1dvalue(int* arr, int r, int value)
{
    bool present = false;
    int i,j;
    for (i = 0; i < r; i++)
    {
        if(value == arr[i])
        {
            present = true;
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



position findlastelement(int** arr, int last, int r, int c)
{
    position position;
    position.lastelement = arr[r - 1][c - 1];
    position.rows = r;
    position.columns = c;

    return position;
}

int normal(int** arr, int rows, int columns)
{
    int value = 0;
    int normal = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            value += pow(arr[i][j], 2);
        }
    }

    normal = sqrt(value);
    return normal;
}

int trace(int** arr, int rows, int columns)
{
    int trace = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(i == j)
            {
                trace += arr[i][j];
            }
        }
    }
    return trace;
}