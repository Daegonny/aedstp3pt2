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

void readWordFromFile(FILE *fp, struct QUEUE *queue);

void printWord(struct WORD word);

int isValidChar(char c);

int isStringEmpty(char *string, int length);

void copyString(char *from, char *to);

#endif
