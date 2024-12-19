#include "array.h"

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

void array2dfind(int** arr, int row, int col, int val)
{
    int max = findmax(arr2, rows, columns);
    printf("\nmax value in array = %d\n", max);
    int min = findmin(arr2, rows, columns);
    printf("\nmin value in array = %d\n", min);
    int avg = findavg(arr2, rows, columns);
    printf("\navg value in array = %d\n", avg);
    printf("enter value to  find ");
    scanf("%d", &value);
    bool value = findvalue(arr2, rows, columns, value);
    printf("\n%d value in array = %s\n", value, value ? "true" : "false");
}
int main()
{
    // int r,c, v,a;
    printf("1. 1D\n2. 2D\n");
    scanf("%d", &dim);
    if(dim == 1)
    {
        printf("etner no of elements");
        scanf("%d", &rows);
        arr1 = create1dArray(rows);
        print1darray(arr1, rows);
        printf("etner type of sort\n1.merge\n2.selected\ninsert");
        scanf("%d", &option);
        if(option == 1)
        {
            mergeSort(arr1, 0, rows - 1);
        }
        else if(option == 2)
        {
            selectsort(arr1, rows);
        }
        else
        {
            insertsort(arr1, rows);
        }
        print1darray(arr1, rows);

    }
    else
    {
        // int arr[x][y] = {{1,2,3}, {4,5,6}, {7,8,9}};
        printf("enter values for rows & colums\nrows:");
        scanf("%d", &rows);
        printf("colums:");
        scanf("%d", &columns);
        arr2 = create2dArray(rows, columns);
        print2darray(arr2, rows, columns);
        array2dfind(arr2, rows, columns, value);
        bubblesort(arr2, rows, columns);
        printf("\nafter sorting\n");
        print2darray(arr2, rows, columns);
        for (int i = 0; i < rows; i++)
        {
            free(arr2[i]);
        }
        free(arr2);
    }
    return 0;   
}