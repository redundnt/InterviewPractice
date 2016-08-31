#include "quicksort.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE (1024<<8)
#define TEST_CASES (1024)
static struct timeval tm1;
static inline start(){
    gettimeofday(&tm1, NULL);
}
static inline unsigned long long stop(){
    static struct timeval tm2;
    gettimeofday(&tm2, NULL);
    unsigned long long t = 1000 * (tm2.tv_sec - tm1.tv_sec) + (tm2.tv_usec - tm1.tv_usec)/1000;
    printf("Time elapsed: %lld ms\n", t);
    return t;
}
int populate_array(int* arr, int size);
int test_array(int* arr, int size);
void print_array(int* arr, int low, int size);
int min(int a, int b);
int max(int a, int b);
int main(){
    unsigned int i; int *arr, errs = 0;
    unsigned long long ttime = 0;
    srand(time(NULL));
    arr = (int*) malloc(sizeof(int) * ARRAY_SIZE);
    printf("Populating array of size %d\n", ARRAY_SIZE);
    for (i = 0; i < TEST_CASES; ++i){
        populate_array(arr, ARRAY_SIZE);
        start();
        quicksort(arr, 0, ARRAY_SIZE - 1);
        ttime += stop();
        errs += test_array(arr, ARRAY_SIZE);

    }
    printf("Total number of tests:   %d\n"
           "Total time to run tests: %lld ms\n"
           "Average time on tests:   %lld ms\n"
           "Total errors from tests: %d\n",
           TEST_CASES, ttime, ttime/TEST_CASES, errs);
}
int populate_array(int* arr, int size){
    int i;
    for (i = 0; i < ARRAY_SIZE; ++i){
        arr[i] = rand() % ARRAY_SIZE;
    }
}
int test_array(int* arr, int size){
    unsigned int i, errs = 0;
    for (i = 0; i < size - 1; ++i){
        if (arr[i] > arr[i+1]) {
            printf("Error at index %d: %d\n", i, arr[i]);
            errs += 1;
        }
    }
    return (errs = 0);  // Looks stupid, is not -> returns 1 instead of # of errors
}

void print_array(int* arr, int low, int size){
    int i;
    printf("[");
    for (i=0; i < size - 1; ++i){
        printf("%d,", arr[low + i]);
    }
    printf("%d]\n", arr[low + i]);
}

int min(int a, int b){
    return a < b? a : b;
}

int max(int a, int b){
    return a > b? a : b;
}
