#ifndef COMPARE_H
#define COMPARE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char s1[]);
char* reverse(char s1[]);
void revRecursive(char *l, char *r);
char* rev(char *s);
int compare(char s1[], char s2[]);
bool pangram(char s1[]);
void sort(char* arr[], int n);
int strcompare(const void* a, const void* b);

#endif