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
    printf("enter what to find:\n1. maxvalue\n2.minvalue\n3.avg value\n4.search\n5.lastvalue\n6.normal\n7.trace\n");
    scanf("%d", &option);
    if(option == 1)
    {
        max = findmax(arr2, rows, columns);
        printf("\nmax value in array = %d\n", max);
    }
    else if(option == 2)
    {
        min = findmin(arr2, rows, columns);
        printf("\nmin value in array = %d\n", min);
    }
    else if(option == 3)
    {
        avg = findavg(arr2, rows, columns);
        printf("\navg value in array = %d\n", avg);
    }
    else if(option == 4)
    {
        printf("enter value to  find ");
        scanf("%d", &value);
        state = findvalue(arr2, rows, columns, value);
        printf("\n%d value in array = %s\n", value, state ? "true" : "false");
    }
    else if(option == 5)
    {
        lastelemt = findlastelement(arr2, 0, rows, columns);
        printf("\n%d last value and size = %d x %d\n", lastelemt.lastelement, lastelemt.rows, lastelemt.columns);
    }
    else if(option == 6)
    {
        value = normal(arr2, rows, columns);
        printf("normal = %d\n", value);
    }
    else if(option == 7)
    {
        value = trace(arr2, rows, columns);
        printf("trace = %d\n", value);
    }
    else
    {
        int right, left;
        diagonal(arr2, rows, columns, &right, &left);
        printf("right = %d\tleft=%d\n", right, left);
    }
}
int main()
{
    printf("1. 1D\n2. 2D\n");
    scanf("%d", &dim);
    if(dim == 1)
    {
        printf("etner no of elements");
        scanf("%d", &rows);
        arr1 = create1dArray(rows);
        print1darray(arr1, rows);
        printf("etner type of sort\n1.merge\n2.selected\n3.insert\n4.operationremove\n5.mergearray\n\
                6.removevalue\n7.commonvalue\n8.copyelements\n9.rotation\n10.add\n");
        scanf("%d", &option);
        if(option == 1)
        {
            mergeSort(arr1, 0, rows - 1);
        }
        else if(option == 2)
        {
            selectsort(arr1, rows);
        }
        else if(option == 3)
        {
            insertsort(arr1, rows);
        }
        else if(option == 4)
        {
            value = duplicate(arr1, rows, arr1);
            print1darray(arr1, value);
        }
        else if(option == 5)
        {
            arr1 = merge1darray(rows, rows);
            // print1darray(arr1, (sizeof(arr1)/sizeof(arr1[0])));
            print1darray(arr1, (rows + rows));
        }

        else if(option == 6)
        {
            printf("enter value to  find ");
            scanf("%d", &value);
            value = removevalue(arr1, rows, value, arr1);
            print1darray(arr1, value);
        }
        else if(option == 7)
        {
            arr1 = commonvalue(rows, rows, &count);
            printf("\n\n\n\n");
            print1darray(arr1, count);
        }
        else if(option == 8)
        {
            int* arr3;
            arr3 = copyelements(arr1, rows);
            print1darray(arr3, rows);
        }
        else
        {
            printf("enter value to  rotate ");
            scanf("%d", &value);
            rotation(arr1, rows, value);
        }
        print1darray(arr1, rows);
        

    }
    else
    {
        printf("enter values for rows & colums\nrows:");
        scanf("%d", &rows);
        printf("colums:");
        scanf("%d", &columns);
        arr2 = create2dArray(rows, columns);
        print2darray(arr2, rows, columns);
        printf("enter type of operation:\n1.calculation\n2.bubblesort\n3.rowsort\n4.columnsort\n5.transpose\n\
                6.comparison\n7.add\n8.mul\n9.boundary\n10.matrotation");
        scanf("%d", &option);
        if(option == 1)
        {
            array2dfind(arr2, rows, columns, value);
        }
        else if(option == 2)
        {
            bubblesort(arr2, rows, columns);
            printf("\nafter sorting\n");
            print2darray(arr2, columns, rows);
        }
        else if(option == 3)
        {
            rowbubblesort(arr2, rows, columns);
            printf("\nafter sorting\n");
            print2darray(arr2, columns, rows);
        }
        else if(option == 4)
        {
            colbubblesort(arr2, rows, columns);
            printf("\nafter sorting\n");
            print2darray(arr2, columns, rows);
        }
        else if(option == 5)
        {
            int** arr3;
            arr3 = transpose(arr2, rows, columns);
            print2darray(arr3, columns, rows);
        }
        else if(option == 6)
        {
            state = compare2darray(rows, columns);
            printf("\nmatrices are = %s\n", state ? "true" : "false");
        }
        else if(option == 7)
        {
            arr2 = add2d(rows, columns);
            print2darray(arr2, rows, columns);
        }
        else if(option == 8)
        {
            arr2 = mul2d(rows, columns);
            print2darray(arr2, rows, columns);
        }
        else if(option == 9)
        {
            arr2 = boundary(arr2, rows, columns);
            print2darray(arr2, rows, columns);
        }
        else if(option == 10)
        {
            matrixrotation(arr2, rows, columns);
            print2darray(arr2, rows, columns);
        }
        else if(option == 11)
        {
            rowswap(arr2, rows, columns);
            print2darray(arr2, rows, columns);
        }
        else if(option == 12)
        {
            colswap(arr2, rows, columns);
            print2darray(arr2, rows, columns);
        }
        for (int i = 0; i < rows; i++)
        {
            free(arr2[i]);
        }
        free(arr2);
    }
    return 0;   
}