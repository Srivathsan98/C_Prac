#ifndef MERGESORT_H
#define MERGESORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "arraycreate.h"
#include "arrayprint.h"

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
int* merge1darray(int elements1, int elements2);

#endif