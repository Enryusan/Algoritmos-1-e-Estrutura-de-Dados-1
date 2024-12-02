#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa que leia 2 números inteiros e imprima se algum for par


int main(void){
    
    setlocale(LC_ALL, "");

    int int1, int2;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &int1);
    printf("Escreva o segundo numero: ");
    scanf("%d", &int2);    

    if((int1 % 2 == 0) || (int2 % 2 == 0)){
        printf("Um dos valores ou todos, são pares\n");
    }
    else{
        printf("Nenhum dos números são pares\n");
    }
}