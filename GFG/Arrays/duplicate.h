#ifndef DUPLICATE_H
#define DUPLICATE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "selectsort.h"
#include "arrayprint.h"
#include "arraycalculate.h"

// int removeDup(int arr[], int n);
int duplicate(int arr[], int elements, int arr2[]);
int removevalue(int arr1[], int elements, int val, int arr2[]);

#endif