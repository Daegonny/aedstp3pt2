#include <stdio.h>
#include <stdlib.h>
#include "word.h"

int main(int argc, char const *argv[]) {
    FILE *fp;
    char path[] = "text.txt";
    fp = fopen(path, "r+");
    readWordFromFile(fp);
    fclose(fp);
    return 0;
}
