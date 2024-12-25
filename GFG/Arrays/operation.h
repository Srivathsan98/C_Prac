#ifndef OPERATION_H
#define OPERATION_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#include "arrayprint.h"
#include "arraycalculate.h"
#include "arraycreate.h"
#include "arraysort.h"

// int removeDup(int arr[], int n);
int duplicate(int arr[], int elements, int arr2[]);
int removevalue(int arr1[], int elements, int val, int arr2[]);
int* commonvalue(int elements1, int elements2, int* count);
int* copyelements(int arr[], int elements);//for normal and memcpy
// int* copyelements(int* arr, int elements);//for pointers
bool compare2darray(int rows, int columns);
int** transpose(int** arr, int rows, int columns);
int** add2d(int rows, int columns);
int** mul2d(int rows, int columns);
int** boundary(int** arr, int rows, int columns);
int diagonal(int** arr, int rows, int columns, int *right, int* left);
int** rowswap(int** arr, int rows, int columns);
int** colswap(int** arr, int rows, int columns);

#endif