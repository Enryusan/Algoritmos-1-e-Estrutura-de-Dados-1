#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Gera os dados entre 6 e 1
    int max = 6;
    int min = 1;
    int d1 = (rand() % (max - min + 1)) + min;
    int d2 = (rand() % (max - min + 1)) + min;
    int d3 = (rand() % (max - min + 1)) + min;

    //Mostra dados gerados e soma
    printf("Resultado (%d)+(%d)+(%d) = (%d)\n", d1, d2, d3, d1+d2+d3);

    return 0;
}