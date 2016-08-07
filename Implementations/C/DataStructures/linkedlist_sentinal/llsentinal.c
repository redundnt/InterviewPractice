#include "llsentinal.h"

lls_t* new_lls(){
    lls_t * l = (lls_t*)malloc(sizeof(lls_t));
    l->NIL.val = 0;
    l->NIL.next = &(l->NIL);
    l->NIL.prev = &(l->NIL);
}

// Prepends
void lls_insert(lls_t* lls_p, unsigned int val){
    node* n = (node*)malloc(sizeof(node));
    n->next = lls_p->NIL.next;
    n->prev = &(lls_p->NIL);
    n->next->prev = n;
    n->val = val;
    (lls_p->NIL).next = n;
}

bool lls_isempty(lls_t* lls_p){
    return (&(lls_p->NIL) == lls_p->NIL.next);
}

unsigned int lls_peek(lls_t *lls_p){
    return ((lls_p->NIL).next)->val;
}

node* lls_search(lls_t* lls_p, unsigned int x){
    node* n = (lls_p->NIL).next;
    while (n != &(lls_p->NIL) && (n->val != x)){
        n = n->next;
    }
    return n;
}

void lls_delete( node* n){
    if (n->val ==  0) return;
    (n->prev)->next = n->next;
    (n->next)->prev = n->prev;

    free(n);
}

void printlist(lls_t* lls_p) {
    node* n = (lls_p->NIL).next;
    printf("0 -> ");
    while (n->val != 0){
        printf("%d -> ", n->val);
        n = n->next;
    }
    printf("%d\n", n->val);
}
