// Write a method to replace all spaces in a string with '%20'. You may assume
// that the string has sufficient space at the end of the string to hold
// additional characters, and that you are given the  length of the string.

#include "4.h"

void replace_space(char* s, int n){
    int i = 0, count = -1, A[n];
    char c;
    for (; (c = s[i]) != '\0'; ++i){
        if (c == ' '){
            A[++count] = i;
        }
    }
    for (; i >= 0 && count >= 0; --i){
        if (i == A[count]){
           s[i + 2*count + 2] = '0';
           s[i + 2*count + 1] = '2';
           s[i + 2*count] = '%';
           --count;
        }
        else s[i + 2*count + 2] = s[i];
    }
}
