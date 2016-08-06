#include "linkedlist.h"

void init_ll(llist* ll){
    if (ll == NULL) return;
    ll->head = NULL;
}

node* append_to_ll(llist *l, int x){
    if (l == NULL) return NULL;
    node* N = malloc(sizeof(node));
    N->val = x;
    N->next = NULL;
    if (l->head == NULL){
        l->head = N;
        return N;
    }
    node* h = l->head;
    while (h->next != NULL) 
        h = h->next;
    h->next = N;
    return N;
}

node* find_in_ll(llist *l, int x){
    if (l == NULL) return NULL;
    node* n = l->head;
    while (n != NULL){
        if (n->val == x) return n;
        n = n->next;
    }
    return NULL;
}

int index_in_ll(llist *l, int x){
    if (l == NULL) return -1;
    node *n = l->head;
    int res = 0;
    while (n != NULL){
        if (n->val == x) return res;
        n = n->next;
        ++res;
    }
    return -1;
}

// return 1 if l is NULL, -1 if i is out of bounds, 0 on success
int remove_index_from_ll(llist *l_p, int i){
    if (l_p == NULL) return 1;        // failed
    node* node_p;                   // Store pointer
    if (i < 0) return -1;
    // Deleting head?
    if (i == 0){
        if (l_p->head == NULL) return -1;
        node_p = l_p->head->next;
        free(l_p->head);
        l_p->head = node_p;
        return 0;
    }
    --i;    // We want to point RIGHT BEFORE target node
    node_p = l_p->head;
    while (i > 0 && node_p != NULL){
        node_p = node_p->next;
        --i;
    }
    if (node_p == NULL) {
        return -1;
    }
    node* M = node_p->next;
    node_p->next = M->next;
    free(M);
    return 0;
}

void reset_ll(llist* ll){
    if (ll->head == NULL) return;
    node* n = ll->head;
    node* m;
    while ((m = n -> next) != NULL){
        free(n);
        n = m;
    }
    free(n);
}

void print_ll(llist* l_p){
    node* n_p = l_p->head;
    printf("LinkedList.head -> \n");
    while (n_p != NULL){
        printf("%i -> ", n_p->val);
        n_p = n_p->next;
    }
    printf("NULL\n");
}
