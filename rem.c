#include <stdio.h>
#include <stdlib.h>
#include "word.h"
#include "queue.h"

int main(int argc, char const *argv[]) {
    int maxSize = 500;
    WORD words[maxSize];
    QUEUE queue = createQueue(words, maxSize);

    FILE *fp;
    char path[] = "other.txt";
    fp = fopen(path, "r+");

    readWordFromFile(fp, &queue);
    printQueue(&queue);

    fclose(fp);
    return 0;
}
