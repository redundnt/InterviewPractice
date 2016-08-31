#include "4.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int main(int argc, char** argv){
    char s1[128]    = "this is a test",
        s1_n[128]  = "this%20is%20a%20test",
        s2[128]    = "nospacesinthisstring",
        s2_n[128]  = "nospacesinthisstring",
        s3[128]    = "  abcde",
        s3_n[128]  = "%20%20abcde",
        s4[128]    = "abcde  ",
        s4_n[128]  = "abcde%20%20",
        s5[128]    = "  ",
        s5_n[128]  = "%20%20";

    printf("%s\n", s1);
    replace_space(s1,128);
    printf("%s\n", s1);
    assert( !strcmp(s1, s1_n));
    printf("%s\n", s2);
    replace_space(s2,128);
    printf("%s\n", s2);
    assert( !strcmp(s2, s2_n));
    printf("%s\n", s3);
    replace_space(s3,128);
    printf("%s\n", s3);
    assert( !strcmp(s3, s3_n));
    printf("%s\n", s4);
    replace_space(s4,128);
    printf("%s\n", s4);
    assert( !strcmp(s4, s4_n));
    printf("%s\n", s5);
    replace_space(s5,128);
    printf("%s\n", s5);
    assert( !strcmp(s5, s5_n));
}
