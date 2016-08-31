#include "binarysearch.h"

int binarysearch(int *arr, int size, int val){
    int low = 0, high = size, mid;
    while (low < high){
        mid = (high + low) / 2;
        if (arr[mid] < val) low = mid + 1;
        else if (arr[mid] > val) high = mid;
        else return mid;
    }
    return -1;
}
