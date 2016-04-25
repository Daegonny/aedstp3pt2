#include <stdio.h>
#include "word.h"
#include "queue.h"

struct WORD createWord(char *letters, int length, int line){
    struct WORD word;
    word.letters = letters;
    word.length = length;
    word.line = line;
    return word;
}

int isStringEmpty(char *string, int length){
    int flag = 1;
    if(length > 0){
        int i;
        char c;
        for(i = 0; i < length; i++){
            if(string[i] != ' ')
                flag = 0;
        }
    }
    return flag;
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

void readWordFromFile(FILE *fp, struct QUEUE *queue){
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
                    pushQueue(createWord(chars, i, line), queue);
                    printWord((*queue).words[(*queue).last]);
                }
                if(c == '\n')
                    line++;
                i = -1;
            }
            i++;
        }
    }
}
