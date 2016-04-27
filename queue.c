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
        struct WORD *aux = (*queue).words;
        for(i = (*queue).first; i < (*queue).last; i++){
           printWord(aux[i]);
        }
    }
}

int isEmptyQueue(struct QUEUE *queue){
    return (*queue).first == (*queue).last;
}

int isFullQueue(struct QUEUE *queue){
    return 0;
}

void pushQueue(struct WORD word, struct QUEUE *queue){
    if(!isFullQueue(queue)){
        (*queue).last = (*queue).last + 1;
        (*queue).words[(*queue).last] = word;
    }
}

void popQueue(struct QUEUE *queue){
    if(!isEmptyQueue(queue)){
        (*queue).last = (*queue).last - 1;
    }
}
