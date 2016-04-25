#ifndef _WORD_H
#define _WORD_H
#include "queue.h"

typedef struct WORD
{
    char *letters;
    int length;
    int line;
}WORD;

struct WORD createWord(char *letters, int length, int line);

int isStringEmpty(char *string, int length);

void printWord(struct WORD w);

void readWordFromFile(FILE *fp, struct QUEUE *queue);

#endif
