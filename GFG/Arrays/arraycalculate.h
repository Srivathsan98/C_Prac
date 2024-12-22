#ifndef ARRAYCALCULATE_H
#define ARRAYCALCULATE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct position
{
    int** arr;
    int lastelement;
    int rows;
    int columns;
} position;

int findmax(int** arr, int r, int c);
int find1dmin(int* arr, int r);
int findmin(int** arr, int r, int c);
int findavg(int** arr, int r, int c);
bool findvalue(int** arr, int r, int c, int value);
position findlastelement(int** arr, int last, int r, int c);
bool find1dvalue(int* arr, int r, int value);
int normal(int** arr, int rows, int columns);
int trace(int** arr, int rows, int columns);

#endif