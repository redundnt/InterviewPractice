#include "quicksort.h"
int partition(int* arr, int low, int high){
    int pivot = arr[(low + high)/2];

    while (low <= high){
        while (arr[low]  < pivot) ++low;
        while (arr[high] > pivot) --high;

        if (low <= high) {
            swap(arr, low, high);
            ++low;
            --high;
        }
    }
    //printf("    partition: %d\n", low);
    return low;
}

void quicksort(int *arr, unsigned int low, unsigned int high){
    int index = partition(arr, low, high);
    if (low < index - 1) quicksort(arr, low, index-1);
    if (index < high)    quicksort(arr, index, high);
}

void swap(int*arr, unsigned int low, unsigned int high){
    int tmp = arr[low];
    arr[low] = arr[high];
    arr[high] = tmp;
}
