#include "selectsort.h"

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