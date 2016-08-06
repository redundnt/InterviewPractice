#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int val;
} node;

typedef struct LinkedList {
    node *head;
} llist;

void init_ll(llist* ll);

/* Append the value `x` to linked list pointed to by l, return pointer to new
 * node for convenience.  Runs in O(n) time, where n is the size of l.
 * Returns NULL if l is NULL
 */
node* append_to_ll(llist *l, int x);

/* Find `x` in linked list l and return pointer to node. Return null if `x`
 * not in list. Runs in O(n)
 * Returns NULL if l is null.
 */
node* find_in_ll(llist *l, int x);

int index_in_ll(llist *l, int x);

int remove_index_from_ll(llist *l_p, int n);

void reset_ll(llist* ll);
void print_ll(llist* l_p);
