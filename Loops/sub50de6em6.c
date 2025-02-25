#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Faça um programa que imprima de 50 até 0, diminuindo de 6 em 6

int main(void){

    setlocale(LC_ALL, "");

    int i = 50;

    while (i > 0){;
        printf("Valor atual de i: %d\n", i);
        i = i - 6;
    } 
}