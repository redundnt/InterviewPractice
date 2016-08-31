#include "5.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(int argc, char** argv){
    char s1[32] = "aaaabbbbccdd",
         s2[32] = "abcdefg",
         s3[32] = "abcdefgg",
         s4[32] = "aabbccdd";
    char *s1_r = "a4b4c2d2",
         *s2_r = NULL,
         *s3_r = NULL,
         *s4_r = NULL;
    char *res, *s, *s_r;

    s = s1; s_r = s1_r;
    res = compress(s);
    if (res == NULL){
        printf("Error: compress(\"%s\") should not evaluate to null\n", s);
    }
    else{
        printf("compress(\"%s\") = \"%s\"\n", s, res);
        free(res);
    }

    s = s2; s_r = s2_r;
    res = compress(s);
    if (res != NULL){
        printf("Error: compress(\"%s\") should evaluate to null\n", s);
        free(res);
    }
    else{
        printf("compress(\"%s\") = NULL\n", s);
    }
    s = s3; s_r = s3_r;
    res = compress(s);
    if (res != NULL){
        printf("Error: compress(\"%s\") should evaluate to null\n", s);
        free(res);
    }
    else{
        printf("compress(\"%s\") = NULL\n", s);
    }
    s = s4; s_r = s4_r;
    res = compress(s);
    if (res != NULL){
        printf("Error: compress(\"%s\") should evaluate to null\n", s);
        free(res);
    }
    else{
        printf("compress(\"%s\") = NULL\n", s);
    }
    
}
