#include "7.h"

int solution(int a, int b){
    unsigned int k = ((unsigned int)(a - b)) >> (sizeof(unsigned int)* 8 - 1);
    return k * b + (1 - k) * a;
}
