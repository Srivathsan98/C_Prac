#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "arraycreate.h"
#include "arrayprint.h"
#include "arraycalculate.h"
#include "bubblesort.h"
#include "mergesort.h"
#include "selectsort.h"
#include "insertionsort.h"
#include "operation.h"
#include "rotation.h"

int rows, columns, value, number, dim, option;
int max, min, avg, count;
bool state;
int **arr2;
int *arr1;
position lastelemt;

// typedef struct last
// {
//     int **arr2;
//     int last;
//     int ro;
//     int co;
// }element;

#endif