#include <stdio.h>
#include <string.h>
#include "word.h"
#include "queue.h"

struct WORD createWord(char string[50], int length, int line){
    struct WORD word;
    //copyString(string, word.string);
    strcpy(word.string, string);
    word.length = length;
    word.line = line;
    return word;
}

int isStringEmpty(char *string, int length){
    int flag = 1;
    if(length > 0){
        int i;
        for(i = 0; i < length; i++){
            if(string[i] != ' ')
                flag = 0;
        }
    }
    return flag;
}

void copyString(char *from, char *to){
    while(*from != '\0'){
        *to = *from;
        from++;
        to++;
    }
    *to = '\n';
    printf("%s\n", to);
}

void printWord(struct WORD word){
    int i = 0;
    printf("%s",word.string );
    for(i = (30 - word.length); i > 0; i--){
        printf(" ");
    }
    printf("%d\n", word.line);
}

void readWordFromFile(FILE *fp, struct QUEUE *queue){
    if(fp == NULL){
        printf("%s\n", "Fail to open file!");
    }
    else{
        char chars[50];
        char c;
        int line = 1;
        int i = 0;
        while ((c = fgetc(fp)) != EOF) {
            if(c != ' ' && c != '\n'){
                chars[i] = c;
            }
            else{
                chars[i] = '\0';
                if(!isStringEmpty(chars, i)){
                    pushQueue(createWord(chars, i, line), queue);
                }
                if(c == '\n')
                    line++;
                i = -1;
            }
            i++;
        }
    }
}
