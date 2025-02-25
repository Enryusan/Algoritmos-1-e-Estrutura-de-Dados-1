#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Imprime os valores pares de 10 ate um numero informado

int main(void){
    setlocale(LC_ALL, "");

    int i = 10;
    int max;

    //Lendo o valor máximo
    printf("Digite um valor máximo para impressão: ");
    scanf("%d", &max);

    while (i <= max){
    
        if(i % 2 == 0){

        //Imprime o valor de i e pula uma linha
        printf("%d \n", i);
        }
        
        //Incrementa o contador de i em 1
        i = i + 1;
    }
}