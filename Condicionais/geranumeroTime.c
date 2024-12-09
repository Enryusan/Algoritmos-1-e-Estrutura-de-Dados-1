#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");
    
    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int max = 14;
    int min = 5;
    int r = (rand() % (max - min + 1)) + min;

    //Imprime o número gerado
    printf("Numero gerado entre 5 e 14: %d\n", r);

    return 0;

}

