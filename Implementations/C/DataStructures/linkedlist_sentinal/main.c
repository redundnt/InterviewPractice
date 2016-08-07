#include <assert.h>
#include "llsentinal.h"

int main(){
    unsigned int i = 1;
    lls_t* l_p = (lls_t*)malloc(sizeof(lls_t));;
    l_p = new_lls();
    node* n;
    assert(lls_isempty(l_p));
    for (; i < 10; ++i){
        lls_insert(l_p, i);
        assert( lls_peek(l_p) == i);
        assert( !lls_isempty(l_p));
        printf("%d: ", i);
        printlist(l_p);
    }
    for (i = 1; i < 10; ++i){
        n = lls_search(l_p, i);
        assert( !lls_isempty(l_p));
        lls_delete(n);
        printf("%d: ", i);
        printlist(l_p);
    }
    assert(lls_isempty(l_p));
    free(l_p);
}
