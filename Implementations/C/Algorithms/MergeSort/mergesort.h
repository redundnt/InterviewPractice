#ifndef MERGESORT_H
#define MERGESORT_H
void mergesort(int *arr, int size);
void mergesort(int *arr, int* helper, int size);
void merge(int *left, int* right, int lsize, int rsize);
#endif
