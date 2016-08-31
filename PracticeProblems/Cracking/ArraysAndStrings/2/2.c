// Implement a function void reverse(char* str) in C/++ which reverses a null
// terminated string.

#include "2.h"
char* reverse(char* s){
    int i = 0, size;
    char c;

    for (; s[i] != '\0'; ++i) ; // empty statement
    if (i < 2) return s; // Str of form ['\0'] OR [c, '\0'] is reversed
    size = --i;
    for (i = 0; i <= size/2; ++i){
        c = s[i];
        s[i] = s[size - i];
        s[size - i] = c;
    }
    return s;
}
