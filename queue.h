#ifndef _QUEUE_H
#define _QUEUE_H

typedef struct QUEUE
{
    int first;
    int last;
    int size;
    struct WORD *words;
}QUEUE;

struct QUEUE createQueue(struct WORD *words, int size);

void printQueue(struct QUEUE *queue);

int isEmptyQueue(struct QUEUE *queue);

int isFullQueue(struct QUEUE *queue);

void pushQueue(struct WORD word, struct QUEUE *queue);

void pushQueue(struct WORD word, struct QUEUE *queue);

void popQueue(struct QUEUE *queue);

struct WORD getFirstQueue(struct QUEUE *queue);

#endif
