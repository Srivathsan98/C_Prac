#include "arraysort.h"

/*******************************************************************
 * BUBBLE SORT
 */
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

int** rowbubblesort(int **arr, int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            for(int k = 0; k < col - j -1; k++)
            {
                if(arr[i][k] > arr[i][k + 1])
                {
                    swap(&arr[i][k], &arr[i][k + 1]);
                }
            }
        }
    }
}

int** colbubblesort(int **arr, int row, int col)
{
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row - 1; j++)
        {
            for(int k = 0; k < row - j -1; k++)
            {
                if(arr[k][i] > arr[k + 1][i])
                {
                    swap(&arr[k][i], &arr[k + 1][i]);
                }
            }
        }
    }
}

/*******************************************************************
 * INSERTION SORT
*******************************************************************/
void insertsort(int arr[], int elements)
{
    int i, j, key;
    for (i = 1; i < elements; i++)
    {
        key = arr[i];
        j = i - 1;
        printf("key = %d\nfor j = %d\n", key, j);

        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key)
        {
            printf("arr[j+1] = %d\n", arr[j+1]);
            arr[j+1] = arr[j];
            printf("arr[j+1] after = %d\n", arr[j+1]);
            j--;
            // print1darray(arr, elements);
        }

        // Place the key in its correct position
        arr[j + 1] = key;
        printf("\nout arr[j+1] = %d\n", arr[j+1]);
        // print1darray(arr, elements);
    }
}

/******************************************************************
 * mergeSort
*/
void merge(int arr[], int left, int mid, int right) 
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    printf("n1 = %d, n2 = %d\n", n1, n2);

    // Create temporary arrays
    int leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;

    printf("k = %d\n", k);
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            printf("leftarr[i] = %d\tarr[k] = %d\n", leftArr[i], arr[k]);
            i++;
        }
        else {
            arr[k] = rightArr[j];
            printf("rightarr[j] = %d\tarr[k] = %d\n", rightArr[j], arr[k]);
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k] = leftArr[i];
        printf("if any - leftarr[i] = %d\tarr[k] = %d\n", leftArr[i], arr[k]);
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k] = rightArr[j];
        printf("if any - rightarr[j] = %d\tarr[k] = %d\n", rightArr[j], arr[k]);
        j++;
        k++;
    }
}

// The subarray to be sorted is in the index range [left-right]
void mergeSort(int arr[], int left, int right) 
{
    if (left < right) {
      
        // Calculate the midpoint
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        printf("left = %d, mid = %d\n", left, mid);
        mergeSort(arr, mid + 1, right);
        printf("right = %d, mid+1 = %d\n", right, mid+1);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int* merge1darray(int elements1, int elements2)
{
    int* farray; 
    farray = create1dArray(elements1);
    print1darray(farray, (elements1));
    int* sarray;
    sarray = create1dArray(elements1);
    printf("\n\n\n\n");
    print1darray(sarray, (elements2));

    int k = 0;
    int* resarray = (int *)malloc((elements1 + elements2) * sizeof(int));

    for(int i = 0; i<elements1; i++)
    {
        resarray[i] = farray[i];
    }
    printf("\n\n\n\n");
    // print1darray(resarray, (elements1 + elements2));
    for(int j = 0; j<elements2; j++)
    {
        resarray[elements1 + j] = sarray[j];
        // k++;
    }
    printf("\n\n\n\n");
    // print1darray(resarray, (elements1 + elements2));
    printf("\n\n\n\n");

    return resarray;
}

/***************************************************************************************
 * sELECTION SORT
 */
void selectsort(int arr[], int elements)
{
    int minvalue;

    for(int i = 0; i < elements - 1; i++)
    {
        minvalue = i;
        printf("minimum = %d\n", minvalue);
        for(int j = i+1; j < elements; j++)
        {
            //for ascending order
            // if(arr[j] < arr[minvalue])
            // {
            //     minvalue = j;
            //     printf("j = %d\n", j);
            // }
            //for descending order
            if(arr[j] > arr[minvalue])
            {
                minvalue = j;
                printf("j = %d\n", j);
            }
        }

        int temp = arr[minvalue];
        printf("temp = %d\n", temp);
        arr[minvalue] = arr[i];
        printf("arrminvalue = %d and at %d\n", arr[minvalue], i);
        arr[i] = temp;
        printf("arr[0] = %d\n", arr[0]);
        // print1darray(arr, elements);
    }
}