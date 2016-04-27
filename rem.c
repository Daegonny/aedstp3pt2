#include <stdio.h>
#include <stdlib.h>
#include "word.h"
#include "queue.h"
#define TAMQUEUE 500 //tamanho maimo da fila

int main(int argc, char const *argv[]) {
    WORD words[TAMQUEUE]; //cria vetor de palavras do tamanho especificado
    QUEUE queue = createQueue(words, TAMQUEUE); //inicia uma fila vazia

    FILE *fp;
    char path[] = "nietzsche.txt"; //define o arquivo de texto
    fp = fopen(path, "r+"); //abre o arquivo de texto

    readWordFromFile(fp, &queue); //lê palavras do arquivo e as adiciona na fila
    printQueue(&queue); //imprime as palavras da fila

    fclose(fp); //fecha arquivo
    return 0;
}
