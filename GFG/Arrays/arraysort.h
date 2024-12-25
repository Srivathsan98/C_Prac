#ifndef ARRAYSORT_H
#define ARRAYSORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int** bubblesort(int **arr, int row, int col);
void swap(int* xp, int* yp);
int** rowbubblesort(int **arr, int row, int col);
int** colbubblesort(int **arr, int row, int col);

void insertsort(int arr[], int elements);

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
int* merge1darray(int elements1, int elements2);

void selectsort(int arr[], int elements);
#endif