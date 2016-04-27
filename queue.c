#include <stdio.h>
#include "queue.h"
#include "word.h"


struct QUEUE createQueue(struct WORD *words, int maxSize){
    struct QUEUE queue;
    queue.first = 0;
    queue.last = 0;
    queue.words = words;
    queue.maxSize = maxSize;
    return queue;
}

void printQueue(struct QUEUE *queue){
    if(!isEmptyQueue(queue)){
        while(!isEmptyQueue(queue)){
            printWord((*queue).words[(*queue).first]);
            popQueue(queue);
        }
    }
}

int isEmptyQueue(struct QUEUE *queue){
    return (*queue).first == (*queue).last;
}

int isFullQueue(struct QUEUE *queue){
    return (*queue).last == (*queue).maxSize;
}

void pushQueue(struct WORD word, struct QUEUE *queue){
    if(!isFullQueue(queue)){
        (*queue).words[(*queue).last] = word;
        (*queue).last = (*queue).last + 1;
    }
}

void popQueue(struct QUEUE *queue){
    if(!isEmptyQueue(queue)){
        int i;
        for(i = 0; i < ((*queue).last -1); i++){
            (*queue).words[i] = (*queue).words[i+1];
        }
        (*queue).last = (*queue).last - 1;
    }
}
