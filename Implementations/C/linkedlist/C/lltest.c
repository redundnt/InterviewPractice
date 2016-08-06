#include "linkedlist.h"
#include <stdio.h>

int main(){
    llist ll;
    init_ll(&ll);

    int errors = 0;
    // Populate Linked List...
    printf("Populating Linked List\n");
    for (int i = 0; i < 10; ++i){
        append_to_ll(&ll,i);        
    }
    printf("Printing List...\n");
    print_ll(&ll);
    // Checking Indexes
    printf("Checking Indexes of Linked List\n");
    for (int i = 0; i < 10; ++i){
        if (!index_in_ll(&ll, i) == i){
            ++errors;
            printf("  Error! Expected %i but got %i\n", i, index_in_ll(&ll,i));
        }
    }
    printf("Checking remove_index_from_ll()\n");
    for (int i = 0; i < 10; ++i) {
        int val = find_in_ll(&ll, i)->val;
        if (! val == i){
            printf(" Error! Expected %i but got %i instead\n", i, val);
            ++errors;
        }
    }

    printf("Checking that find_in_ll() fails gracefully...\n");
    if (find_in_ll(&ll, -1) != NULL) {
        printf("Error! Expected NULL, got something else!!!");
        ++errors;
    }
    if (find_in_ll(&ll, 11) != NULL) {
        printf("Error! Expected NULL, got something else!!!");
        ++errors;
    }
    
    // Test Removal
    printf("Testing Removal\n");
    for (int i = 0; i < 10; ++i){
        print_ll(&ll);
        if (ll.head->val != i) {
            printf("Error in removing. Expected %i but got %i\n", i, ll.head->val);
            ++errors;
        }
        remove_index_from_ll(&ll, 0);
    }
    if (ll.head != NULL){
        printf("Error, expected ll.head to be NULL\n");
        ++errors;
    }

    printf("Total Errors: %i\n", errors);
}
