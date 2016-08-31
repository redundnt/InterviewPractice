#include "3.h"
#include <stdio.h>

int main(int argc, char** argv){
    char s1[32] = "perm1",
         s2[32] = "perm2",
         s3[32] = "merp1",
         s4[32] = "merp2",
         s5[32] = "perm2 ",
         s6[64] = "abcdefghijklmnopqrstuvwxyzabcdefg",
         s7[64] = "bcdefghijaklmnopqrstuvwxyzabcdefg";
    
    assert(is_permutation(s1, s3));
    assert(is_permutation(s6, s7));
    assert(!is_permutation(s1, s7));
    assert(!is_permutation(s1, s2));
}
