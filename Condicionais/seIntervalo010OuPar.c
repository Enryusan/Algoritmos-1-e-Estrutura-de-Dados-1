#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa que leia 2 números inteiros e imprima na tela
Se a soma deles estiver entre 0 e 10 ou se a soma for par
*/


int main(void){
    
    setlocale(LC_ALL, "");

    int int1, int2;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &int1);
    printf("Escreva o segundo numero: ");
    scanf("%d", &int2);    

    if((int1 + int2 > 0 && 10 < int1 + int2) || (int1 + int2 % 2 == 0)){
        printf("O número pode estar entre 0 e 10 ou ser par\n");
    }
    else{
        printf("Nenhum dos números são pares\n");
    }
}