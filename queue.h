#ifndef _QUEUE_H
#define _QUEUE_H

typedef struct QUEUE
{
    int first;
    int last;
    int size;
    struct WORD *words;
}QUEUE;

void printQueue(struct QUEUE *queue);

int isEmptyQueue(struct QUEUE *queue);

void pushQueue(struct WORD word, struct QUEUE *queue);

void pushQueue(struct WORD word, struct QUEUE *queue);

void popQueue(struct QUEUE *queue);

struct WORD getFirstQueue(struct QUEUE *queue);

#endif
