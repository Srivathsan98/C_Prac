#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// #define x 7
// #define y 4
// const int m = 4;
// const int n = 8;
// const int x = 3;
// const int y = 3;
/*
Note: 
1. doing a normal global declaration of a variable and using it for the array rows and columns as input will not work as the memory needs to be allocated at compile time.
so we need to either declare them as fixed value either as a const or as a macro
2. see to that the functions calling and using the array as arguments have the same size if possible use the same variables used for declaration*/
int** createArray(int a, int b)
{
    int **arr = (int **)malloc(a * sizeof(int *));
    for(int i = 0; i < a; i++)
    {
        arr[i] = (int *)malloc(b * sizeof(int *));
    }

    int value = 1;
     for (int i = 0; i < a; i++)
    {
        for (int j=0; j< b; j++)
        {
            arr[i][j] = value++;
        }
    }
    return arr;
}
void printarray(int** arr, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        if(i != 0)
        {
            printf("\n");
        }
        for (j=0; j< c; j++)
        {
            if(j != 0)
            {
                printf("\t");
            }
            printf("%d", arr[i][j]);
        }
    }
}
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

int main()
{
    int r,c, v;
    // int arr[x][y] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printf("enter values for rows & colums\nrows:");
    scanf("%d", &r);
    printf("colums:");
    scanf("%d", &c);
    int** arr = createArray(r,c);
    printarray(arr, r, c);
    int max = findmax(arr, r, c);
    printf("\nmax value in array = %d\n", max);
    int min = findmin(arr, r, c);
    printf("\nmin value in array = %d\n", min);
    int avg = findavg(arr, r, c);
    printf("\navg value in array = %d\n", avg);
    printf("enter value to  find ");
    scanf("%d", &v);
    bool value = findvalue(arr, r, c, v);

    printf("\n%d value in array = %s\n", v, value ? "true" : "false");
    for(int i = 0; i<r; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;   
}