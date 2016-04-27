#ifndef _WORD_H
#define _WORD_H
#include "queue.h"

typedef struct WORD
{
    char string[50];
    int length;
    int line;
}WORD;

struct WORD createWord(char string[50], int length, int line);

int isStringEmpty(char *string, int length);

void printWord(struct WORD word);

void copyString(char *from, char *to);

void readWordFromFile(FILE *fp, struct QUEUE *queue);

#endif
