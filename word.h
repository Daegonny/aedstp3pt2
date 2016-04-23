#ifndef _WORD_H
#define _WORD_H

typedef struct WORD
{
    char *letters;
    int length;
    int line;
}WORD;

struct WORD createWord(char *letters, int length, int line);

void printWord(struct WORD w);

void readWordFromFile(FILE *fp);

#endif
