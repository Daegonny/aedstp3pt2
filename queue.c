#include <stdio.h>
#include "queue.h"
#include "word.h"


struct QUEUE createQueue(struct WORD *words, int size){
    struct QUEUE queue;
    queue.first = 0;
    queue.last = 0;
    queue.words = words;
    queue.size = size;
    return queue;
}

void printQueue(struct QUEUE *queue){
    if(!isEmptyQueue(queue)){
        int i;
        struct QUEUE *aux = (*queue).word
        for(int i = (*queue).first; i < (*queue).last; i++){
            printWord((*queue).words[i]);
        }
    }
}

int isEmptyQueue(struct QUEUE *queue){
    return (*queue).first = (*queue).last;
}

int isFullQueue(struct QUEUE *queue){
    return 
}

void pushQueue(struct WORD word, struct QUEUE *queue);

void pushQueue(struct WORD word, struct QUEUE *queue);

void popQueue(struct QUEUE *queue);

struct WORD getFirstQueue(struct QUEUE *queue);
