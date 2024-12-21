#include "duplicate.h"

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