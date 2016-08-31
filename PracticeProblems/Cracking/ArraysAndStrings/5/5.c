/* Implement a method to do basic string compression.
 *
 */
#include "5.h"

char* compress(char* s){
    int i=0, len, count=0;
    char c, *res, *c_p;
    len = strlen(s);
    res = (char*)malloc(sizeof(char) + 1);
    c = s[0]; c_p = res;
    for (; i < len; ++i) {
        if (s[i] != c) {
            *(c_p++) = c;
            *(c_p++) = '0' + count;   // Assumes count < 10. Update...
            count = 0; c = s[i + 1];
            if (c_p - res > len - 3){
                free(res);
                return NULL;
            }
        }
        ++count;
    }

    *(c_p++) = c;
    *(c_p++) = '0' + count;   // Assumes count < 10. Update...
    *(c_p) = '\0';
    return res;
}
