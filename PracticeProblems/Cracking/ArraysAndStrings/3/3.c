// Given two strings, write a method to decide if one is a permutation of the
// other.

#include "3.h"

bool is_permutation(char* s, char* t){
    int i;
    int hashed[256];
    for (i = 0; i < 256; ++i) hashed[i] = 0;
    for (i=0; s[i] != '\0' && t[i] != '\0'; ++i){
        ++hashed[s[i]]; --hashed[t[i]];
    }
    if (s[i] != '\0' || t[i] != '\0') return false;
    for (i = 255; i > 0; --i) if (hashed[i]) return false;
    return true;
}
