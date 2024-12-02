#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia dois números inteiros e imprima
na tela qual é o maior deles ou se são iguais */

int main(void){
    setlocale(LC_ALL, "");

    int n1, n2;

    printf("Escreva o valor de dois números inteiros para comparação:");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        printf("O numero %d é maior que o numero %d\n", n1, n2);
    }
    else if(n1 < n2) {
        printf("O numero %d é menor que o numero %d\n", n1, n2);
    }
    else {
        printf("O numero %d é igual ao valor de %d\n", n1, n2);
    }

}