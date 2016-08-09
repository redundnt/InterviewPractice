#include "heap.h"


heap* new_heap(unsigned int max){
    heap* h_p = (heap*)malloc(sizeof(heap));
    h_p->max = max;
    h_p->arr_p = (int*)malloc(sizeof(int) * max);
    h_p->size = 0;
}

int heap_add(heap* h_p, int x){
    unsigned i = h_p->size++;
    int swap;
    if (h_p->max == i){
        --h_p->size; 
        return -1;
    }
    h_p->arr_p[i] = x;
    
    while (i > 0 && (swap = h_p->arr_p[i]) > h_p->arr_p[i>>1]){
        h_p->arr_p[i] = h_p->arr_p[i>>1];
        h_p->arr_p[i>>1] = swap;
        i >>= 1;
    }
    return 0;
}

void print_heap(heap* h_p){
    int i;
    for (i = 0; i < h_p->size; ++i){
        printf("%d, ", h_p->arr_p[i]);
    }
    printf("\n");
}

int heap_remove(heap* h_p, unsigned int i){
    if (i < 0 || i >= h_p->max) return -1;
    int* arr = h_p->arr_p;
    unsigned int size = h_p->size, l, r;
    while(1){
        printf("  ");
        print_heap(h_p);
        l = (i << 1) + 1;
        r = l + 1;
        if (r < size && arr[r] > arr[l]){
            arr[i] = arr[r];
            i = r;
        } else if (l < size){
            arr[i] = arr[l];
            i = l;
        }else break;
    }
    h_p->size -= 1;
    return 0;
}
int* heap_sort(heap* h_p){
    return NULL;
}
