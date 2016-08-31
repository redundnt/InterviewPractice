#include "mergesort.h"

void mergesort(int* arr, int size){
    int* helper = (int*)malloc(sizeof(int) * size);
    mergesort(arr, helper, size);
    free(helper);
}
void mergesort(int* arr, int* helper, int size){
    int *mid;
    if (size > 1){
        mid = arr + size/2;
        mergesort(arr, helper, size/2);
        mergesort(mid, helper, size - size/2);
        merge(arr, mid, size/2, size - size/2);
    }
}

void merge(int* left, int* right, int lsize, int rsize){
    
}
