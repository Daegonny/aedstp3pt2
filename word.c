#include <stdio.h>
#include "word.h"

struct WORD createWord(char *letters, int length, int line){
    struct WORD w;
    w.letters = letters;
    w.length = length;
    w.line = line;
    return w;
}

void printWord(struct WORD w){
    int i = 0;
    for(i = 0; i < w.length; i++){
        printf("%c", w.letters[i]);
    }
    for(i = (25 - w.length); i > 0; i--){
        printf(" ");
    }
    printf("%d\n", w.line);
}

void readWordFromFile(FILE *fp){
    if(fp == NULL){
        printf("%s\n", "Fail to open file!");
    }
    else{
        char chars[101];
        char c;
        int line = 1;
        int i = 0;
        while ((c = fgetc(fp)) != EOF) {
            if(c != ' ' && c != '\n'){
                chars[i] = c;
            }
            else{
                if(!isStringEmpty(chars, i)){
                    printWord(createWord(chars, i, line));
                }
                if(c == '\n')
                    line++;
                i = -1;
            }
            i++;
        }
    }
}
