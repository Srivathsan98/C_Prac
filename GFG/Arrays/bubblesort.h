#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int** bubblesort(int **arr, int row, int col);
void swap(int* xp, int* yp);
int** rowbubblesort(int **arr, int row, int col);
int** colbubblesort(int **arr, int row, int col);

#endif