#include "binarysearch.h"
#include <stdio.h>

#define ARRAY_SIZE 12345
int main(){
    int arr[ARRAY_SIZE],i;
    for (i = 0; i < ARRAY_SIZE; ++i){
        arr[i] = i;
    }
    for (i = 0; i < ARRAY_SIZE; ++i){
        printf("Testing i = %d... ", i);
        if (binarysearch(arr, ARRAY_SIZE, i) != i)
            printf("Error at i = %d\n", i);
        else printf("Successful\n");
    }
    printf("Test passed successfully\n");
}
