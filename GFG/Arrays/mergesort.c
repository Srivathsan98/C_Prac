#include "mergesort.h"

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