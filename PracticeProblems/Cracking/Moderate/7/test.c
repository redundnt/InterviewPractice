#include "7.h"
#include <stdio.h>

int main(){
    int i, j, max, sln;
    for (i = -2048911; i < 2012348; i += 5){
        for (j = -12355; j < 1298398; j += 7){
            max = i > j? i : j;
            sln = solution(i,j);
            if (sln != max) printf("Error: a = %d, b = %d, sln = %d\n", i, j, sln);
            if (solution(j,i) != max) printf("Error: a = %d, b = %d\n", j, i);
        }
    }
}
