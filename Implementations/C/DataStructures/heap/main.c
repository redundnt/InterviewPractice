#include "heap.h"

#define MAX_HEAP_SIZE 8
int main(){
    heap* h_p = new_heap(MAX_HEAP_SIZE);
    for (int i = 0; i < MAX_HEAP_SIZE; ++i){
        heap_add(h_p, i);
        print_heap(h_p);
    }
    for (int i = 0; i < MAX_HEAP_SIZE; ++i){
        heap_remove(h_p, 0);
        print_heap(h_p);
    }
    free(h_p);
}
