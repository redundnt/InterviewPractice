#ifndef HEAP_H
#define HEAP_H
#include <stdlib.h>
#include <stdio.h>

typedef struct Heap {
    int* arr_p;
    unsigned int max;       // Max size
    unsigned int size;      // Current size
} heap;

heap* new_heap(unsigned int max);
int heap_add(heap* h_p, int x);
void print_heap(heap* h_p);
int heap_remove(heap* h_p, unsigned int i);
int* heap_sort(heap* h_p);
#endif
