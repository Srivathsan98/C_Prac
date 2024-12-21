#include "insertionsort.h"

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
