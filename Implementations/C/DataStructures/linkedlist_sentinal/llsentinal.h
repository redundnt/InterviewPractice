#ifndef LLSENTINAL_H
#define LLSENTINAL_H
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct Node {
    struct Node* next;
    struct Node* prev;
    unsigned int val;
}node;

typedef struct linked_list_sentinal {
    // Sentinal value is 0. This stores positive unsigned ints
    node NIL;
}lls_t;

lls_t* new_lls();

// Prepends
void lls_insert(lls_t* lls_p, unsigned int val);
bool lls_isempty(lls_t* lls_p);
unsigned int lls_peek(lls_t *lls_p);
node* lls_search(lls_t* lls_p, unsigned int x);
void lls_delete( node* n);
void printlist(lls_t* lls_p);
#endif
