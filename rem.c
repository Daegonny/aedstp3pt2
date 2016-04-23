#include <stdio.h>
#include <stdlib.h>
#include "word.h"

int isStringEmpty(char *string, int length){
    int flag = 1;
    if(length > 0){
        int i;
        char c;
        for(i = 0; i < length; i++){
            if(string[i] != ' ')
                flag = 0;
        }
    }
    return flag;
}

int main(int argc, char const *argv[]) {
    FILE *fp;
    char path[] = "text.txt";
    fp = fopen(path, "r+");
    readWordFromFile(fp);
    fclose(fp);
    return 0;
}
