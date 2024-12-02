#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia 3 números inteiros
e imprima na tela se os 3 são maiores que 10 */

int main(void){
    
    setlocale(LC_ALL, "");

    int int1, int2, int3;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &int1);
    printf("Escreva o segundo numero: ");
    scanf("%d", &int2);    
    printf("Escreva o terceiro numero: ");
    scanf("%d", &int3);

    if(int1 > 10 && int2 > 10 && int3 > 10){
        printf("Todos os números são maiores que 10\n");
    }
    else{
        printf("Um dos valores ou todos, não são maiores que 10\n");
    }
}