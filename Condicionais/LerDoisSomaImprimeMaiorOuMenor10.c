#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia dois números inteiros e imprima
na tela se a soma deles é maior na tela se a soma deles é maior ou igual a 10 ou menor que 10*/

int main(void) {
    setlocale(LC_ALL, "");

    int n1, n2, soma;

    printf("Escreva dois números, que irão ser somados: ");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;

    if(soma >= 10) {
        printf("Soma é maior ou igual a 10\n");
    }
    else {
        printf("A soma é menor ou igual a 10\n");
    }
}

