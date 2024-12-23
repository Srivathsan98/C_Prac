#include "operation.h"

/* use a single index to find the elements. use the updated array value to print the elements*/
int duplicate(int arr[], int elements, int arr2[])
{
    selectsort(arr, elements);
    int k = 0;
    for (int i = 0; i <= elements - 1; i++)
    {

        printf("i = %d\n", arr[i]);
        if(i == 0 || arr[i] != arr[i - 1])
        {
            arr2[k] = arr[i];
            k++;
        }
    }

    return k;
    
    // print1darray(arr2, elements);
}

// int removeDup(int arr[], int n) 
// {
//     if (n == 0) return 0;

//     selectsort(arr, n);

//     int j = 0; // Index of the last unique element
//     for (int i = 1; i < n; i++) { // Iterate through the entire array
//         if (arr[i] != arr[j]) { // If the current element is different
//             j++; // Move the unique index forward
//             arr[j] = arr[i]; // Place the unique element at the new position
//         }
//     }
//     return j + 1; // New size of the array with unique elements
// }
int removevalue(int arr1[], int elements, int val, int arr2[])
{
    bool present;
    present = find1dvalue(arr1, elements, val);

    int k = 0;
    if (present)
    {
        
        for (int i = 0; i <= elements - 1; i++)
        {

            // printf("i = %d\n", arr1[i]);
            if (i == 0 || val != arr1[i])
            {
                arr2[k] = arr1[i];
                k++;
            }
        }
    }

    return k;
}

int* commonvalue(int elements1, int elements2, int* count)
{
    int* array1;
    int* array2;
    int* resarray;
    int x, k=0;
    bool flag;

    array1 = create1dArray(elements1);
    array2 = create1dArray(elements2);
    print1darray(array1, elements1);
    printf("\n\n\n\n");
    print1darray(array2, elements2);

    resarray = (int *)malloc((elements1 + elements2) * sizeof(int));

    for(int i = 0; i < elements1; i++)
    {
        for(int j = 0; j<elements2; j++)
        {
            if(array2[j] == array1[i])
            {
                flag = 0;

                for(x = 0; x < k; x++)
                {
                    if(resarray[x] == array1[i])
                    {
                        flag++;
                    }
                }
                if(flag == 0)
                {
                    resarray[k] = array1[i];
                    k++;
                }
                // resarray[k] = array1[i];
                // k++;
            }
        }
    }
    *count = k;
    return resarray;
}

int* copyelements(int arr[], int elements)
{
    int* arr2 = (int *)malloc(elements * sizeof(int));

    for(int i = 0; i <elements; i++)
    {
        arr2[i] = arr[i];
    }
    return arr2;
}

//using pointers

// int* copyelements(int* arr, int elements)
// {
//     int* arr2 = (int *)malloc(elements * sizeof(int));

//     for(int i = 0; i <elements; i++)
//     {
//         *(arr2 + i) = *(arr + i);
//     }
//     return arr2;
// }

//using memcpy
// int* copyelements(int arr[], int elements)
// {
//     int* arr2 = (int *)malloc(elements * sizeof(int));

//     memcpy(arr2, arr, elements * sizeof(arr[0]));
//     return arr2;
// }

bool compare2darray(int rows, int columns)
{
    int** array1;
    int** array2;
    bool equal = false;
    int flag = 0;

    array1 = create2dArray(rows, columns);
    printf("\n\n\n\n");
    print2darray(array1, rows, columns);
    array2 = create2dArray(rows, columns);
    printf("\n\n\n\n");
    print2darray(array2, rows, columns);
    printf("\n\n\n\n");

    for(int i = 0; i <rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(array1[i][j] == array2[i][j])
            {
                flag++;
            }
        }
    }
    if(flag == (rows * columns))
    {
        equal = true;
    }
    return equal;
}

int** transpose(int** arr, int rows, int columns)
{
    int** arr2 = (int **)malloc(columns * sizeof(int *));
    for(int i = 0; i < columns; i++)
    {
        arr2[i] = (int *)malloc(rows * sizeof(int));
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            arr2[j][i] = arr[i][j];
        }
    }
    return arr2;
}

int** add2d(int rows, int columns)
{
    int** arr1;
    int** arr2;

    arr1 = create2dArray(rows, columns);
    print2darray(arr1, rows, columns);
    arr2 = create2dArray(rows, columns);
    printf("\n\n\n\n");
    print2darray(arr2, rows, columns);
    printf("\n\n\n\n");

    int** resarr = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++)
    {
        resarr[i] = (int *)malloc(columns * sizeof(int));
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            resarr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return resarr;
}

int** mul2d(int rows, int columns)
{
    int** arr1;
    int** arr2;

    arr1 = create2dArray(rows, columns);
    print2darray(arr1, rows, columns);
    arr2 = create2dArray(rows, columns);
    printf("\n\n\n\n");
    print2darray(arr2, rows, columns);
    printf("\n\n\n\n");

    int** resarr = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++)
    {
        resarr[i] = (int *)malloc(columns * sizeof(int));
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            resarr[i][j] = 0;
            for(int k = 0; k < rows; k++)
            {
                resarr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    return resarr;
}

int** boundary(int** arr, int rows, int columns)
{
    int** arr2 = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++)
    {
        arr2[i] = (int *)malloc(columns * sizeof(int));
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j <columns; j++)
        {
            if((i == 0 || i == rows - 1) || (j == 0 || j == columns - 1))
            {
                arr2[i][j] = arr[i][j];
            }
        }
    }
    return arr2;
}

int diagonal(int** arr, int rows, int columns, int *right, int* left)
{
    *right = 0;
    *left = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(i == j)
            {
                *right += arr[i][j];
            }
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if((i + j) == (rows - 1))
            {
                printf("%d\n", arr[i][j]);
                *left += arr[i][j];
            }
        }
    }
}

int** colswap(int** arr, int rows, int columns)
{
    int j = 0;
    for(int i = 0; i < rows; i++)
    {
        swap(&arr[i][j], &arr[i][columns - 1]);
    }
}

int** rowswap(int** arr, int rows, int columns)
{
    int j = 0;
    for(int i = 0; i < rows; i++)
    {
        swap(&arr[j][i], &arr[rows - 1][i]);
    }
}