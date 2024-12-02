#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Faça um programa que leia um número inteiro e informe se ele é par ou não


int main(void) {

    setlocale(LC_ALL, "");

    int n1;

    printf("Escreva um numero para descobrir se ele é par ou impar: ");
    scanf("%d", &n1);

    if(n1 % 2 == 0) {
        printf("Seu numero é par\n");
    }
    else{
        printf("Seu numero é impar\n");
    }

}