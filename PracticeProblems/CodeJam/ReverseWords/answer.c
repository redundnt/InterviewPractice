#include <stdio.h>
#include <stdlib.h>

#define LINEMAX  512
#define MAX_WPL  256

void split_line_to_words(char* line, char** words);


int main(int argc, char** argv){
    FILE* input_fp;
    FILE* output_fp;
    int N;  // Number of lines
    char* l_p;
    char c;
    int cword;
    int word_i;
    if (argc == 1){
        fprintf(stderr,"No argument!! Exiting...\n");
        exit(1);
    }

    if ( ( input_fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr,"Error, couldn't read file %s\n", argv[1]);
        exit(1);
    }

    if ( ( output_fp = fopen("result.txt", "w")) == NULL){
        fprintf(stderr,"Error, couldn't open file 'result.txt' for writing\n");
        exit(1);
    }

    fscanf(input_fp, "%d", &N);
    printf("%d lines to follow\n", N);
    char** words = malloc(sizeof(char*) * MAX_WPL + 1);
    char* line   = malloc(sizeof(char*) * LINEMAX + 1); 
    for (int i = 0; i < MAX_WPL; ++i)
        words[i] = malloc(sizeof(char) * LINEMAX + 1);
    for (int i = 0; i < N; ++i){
        fgets(line, LINEMAX, input_fp);
        l_p = line;
        cword = 0;
        word_i = 0;
    }
}

void split_line_to_words(char* line, char** words){
    if ( line == NULL || words == NULL) {
        fprintf(stderr, "Error, null pointer\n");
        exit(1);
    }
    int ind = 0;      // index in word
    int word = 0;     // current word
    int cwi = 0;    // current word index
    char c;         // Char for holding values
    char* l_p = line;   // Point to start of line

    // Loop through line. If catch EOF, return
    while ( ( c = *(l_p++)) != EOF) {
        if (c == ' ') {

        }
        else if (c == '\n') {

        }
        else{
            words[word][ind++] = c;
        }
    }

}
