#include "1.h"
#include <stdio.h>
#include <assert.h>

int main(int argc, char** argv){
    char *s1 = "helo wrd",
         *s2 = "this should be false",
         *s3 = "So should this",
         *s4 = "Returns 1";
    
    printf("Testing s1: %s\n", s1);
    assert(unique_no_data(s1));
    printf("Testing s2: %s\n", s2);
    assert(unique_no_data(s4));
    printf("Testing s3: %s\n", s3);
    assert(!unique_no_data(s2));
    printf("Testing s4: %s\n", s4);
    assert(!unique_no_data(s3));

    printf("Testing s1: %s\n", s1);
    assert(unique_with_data(s1));
    printf("Testing s2: %s\n", s2);
    assert(unique_with_data(s4));
    printf("Testing s3: %s\n", s3);
    assert(!unique_with_data(s2));
    printf("Testing s4: %s\n", s4);
    assert(!unique_with_data(s3));

    
}
