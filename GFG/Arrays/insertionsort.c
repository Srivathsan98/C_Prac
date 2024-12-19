#include "insertionsort.h"

void insertsort(int arr[], int elements)
{
    int i, j, key;
    for(i = 1; i < elements; i++)
    {
        key = arr[i];
        j = i - 1;
        printf("key = %d\nforj=%d\n", key, j);

        for(j >= 0 ; arr[j] > key; j--)
        {
            printf("arr[j+1] = %d\n", arr[j+1]);
            arr[j+1] = arr[j];
            printf("arr[j+1]after = %d\n", arr[j+1]);
            // print1darray(arr, elements);
        }

        arr[j + 1] = key;
        printf("\noutarr[j+1] = %d\n", arr[j+1]);
    }
}