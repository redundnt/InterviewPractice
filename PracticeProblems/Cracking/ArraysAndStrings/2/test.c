#include <stdio.h>
#include "2.h"

int main(int argc, char** argv){
    char s1[32] = "hello world\0",
         s2[32] = "This is a test\0",
         s3[32] = "abcdefg",
         s4[32] = "abcdefgh",
         s5[32] = "12345\n67890\0",
         s6[32] = "",
         s7[32] = "1";

    printf("%s\n", s1);
    printf("%s\n", reverse(s1));
    printf("%s\n", reverse(s1));
    printf("%s\n", s2);
    printf("%s\n", reverse(s2));
    printf("%s\n", reverse(s2));
    printf("%s\n", s3);
    printf("%s\n", reverse(s3));
    printf("%s\n", reverse(s3));
    printf("%s\n", s4);
    printf("%s\n", reverse(s4));
    printf("%s\n", reverse(s4));
    printf("%s\n", s5);
    printf("%s\n", reverse(s5));
    printf("%s\n", reverse(s5));
    printf("%s\n", s6);
    printf("%s\n", reverse(s6));
    printf("%s\n", reverse(s6));
    printf("%s\n", s7);
    printf("%s\n", reverse(s7));
    printf("%s\n", reverse(s7));
}
