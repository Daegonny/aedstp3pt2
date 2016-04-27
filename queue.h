#ifndef _QUEUE_H
#define _QUEUE_H

typedef struct QUEUE //estrutura fila
{
    int first; //primeiro da fila
    int last; //último da fila
    int maxSize; //tamanho máximo da fila
    struct WORD *words; //vetor de palavras
}QUEUE;

//cria fila nova vazia
struct QUEUE createQueue(struct WORD *words, int maxSize);

//imprime as palavras da fila à medida que a desenfileira
void printQueue(struct QUEUE *queue);

//checa se a fila está fazia
int isEmptyQueue(struct QUEUE *queue);

//checa se a fila está cheia
int isFullQueue(struct QUEUE *queue);

//enfileira palavra na fila
void pushQueue(struct WORD word, struct QUEUE *queue);

//desenfileira palavra na fila
void popQueue(struct QUEUE *queue);

#endif
