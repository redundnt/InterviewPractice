#include <stdio.h>
#include <stdlib.h>
/*
Problem

You receive a credit C at a local store and would like to buy two items. You
first walk through the store and create a list L of all available items. From
this list you would like to buy two items that add up to the entire value of
the credit. The solution you provide will consist of the two integers
indicating the positions of the items in your list (smaller number first).

Input

The first line of input gives the number of cases, N. N test cases follow. For
each test case there will be:

One line containing the value C, the amount of credit you have at the store.
One line containing the value I, the number of items in the store.  One line
containing a space separated list of I integers. Each integer P indicates the
price of an item in the store.  Each test case will have exactly one solution.
Output

For each test case, output one line containing "Case #x: " followed by the
indices of the two items whose price adds up to the store credit. The lower
index should be output first.

Limits

5 ≤ C ≤ 1000
1 ≤ P ≤ 1000

Small dataset

N = 10
3 ≤ I ≤ 100

Large dataset

N = 50
3 ≤ I ≤ 2000

Sample
Input              Output 

3                  CASE 1: 2 3
100                CASE 2: 1 4
3                  CASE 3: 4 5
5 75 25
200
7
150 24 79 50 88 345 3
8
8
2 1 9 4 4 56 90 3
*/
#define RESULT_SIZE 2048
#define LINE_SIZE    128
int which_case = 0;
void answer(int C, int I, int* vals, FILE* res_fp ){
    ++which_case;

    for (int i = 0; i < I; ++i){    // Cycle through items
        for (int j = i+1; j < I; ++j){
            if (vals[i] + vals[j] == C){
                fprintf(res_fp, "Case #%d: %d %d\n",which_case, i+1, j+1);
                return;
            }
        }
    }
}

int main(int argc, char** argv){
    if (argc == 1){
        printf("Error, no file name specified\n");
        exit(-1);
    }
    char* fname = argv[1];
    char* result_name = "result.txt";

    // String Manipulation
    char* input  = malloc(sizeof(char)*LINE_SIZE);      // To be parsed

    int N, C = 0, I = 0;  // (N)umber of cases, Total (C)redit, number of (I)tems
    int* items;            // Item costs
    FILE* input_fp;
    FILE* res_fp;
    if ( (input_fp = fopen(fname, "r")) == NULL){
        printf("Couldn't open file %s\n",fname);   // Input
        exit(1);
    }
    fscanf(input_fp, "%d", &N);

    if ( (res_fp = fopen(result_name, "w")) == NULL){
        printf("Couldn't open result.txt\n");
        exit(1);
    }
    printf("Number of cases: %d\n", N);

    for (int c = 0; c < N; ++c){
        fscanf(input_fp, "%d", &C);
        printf("Total Credit of %d\n", C);
        fscanf(input_fp, "%d", &I);
        printf("Total Items: %d\n", I);
        items = malloc(sizeof(int) * I);
        for (int i = 0; i < I; ++i){
            fscanf(input_fp, "%d", &items[i]);
        }
        answer(C, I, items, res_fp);

        free(items);        
    }
    free(input);
    fclose(input_fp);
    fclose(res_fp);
}
