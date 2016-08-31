/* Implement an algorithm to determine if a string has all unique characters.
 * What if you cannot use additional data structures?
 */
#include "1.h"

bool unique_no_data(char *s){
    // Runs in O(n^2) time. Could be improved with additional storage space
    int i, j; char c;
    for (i = 0; (c = s[i]) != '\0'; ++i){
        for (j = i + 1; s[j] != '\0'; ++j){
            if (s[j] == c) return false;
        }
    }
    return true;
}

bool unique_with_data(char *s) {
    int i;
    char hashed[256], c;
    for (i = 0; i < 256; ++i) hashed[i] = 0;
    for (i = 0; (c = s[i] ) != '\0'; ++i)
        if (hashed[c]++) return false;
    return true;
}

