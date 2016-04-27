#include <stdio.h>
#include <stdlib.h>
#include "word.h"
#include "queue.h"

int main(int argc, char const *argv[]) {
    int size = 250;
    WORD words[size];
    QUEUE queue = createQueue(words, size);

    FILE *fp;
    char path[] = "other.txt";
    fp = fopen(path, "r+");

    readWordFromFile(fp, &queue);
    printQueue(&queue);

    fclose(fp);
    return 0;
}
