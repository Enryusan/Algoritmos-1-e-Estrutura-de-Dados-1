#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    
    //Char PT-BR
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 2 notas e mostre a média entre elas.

    //Declarando variáveis
    float nota1, nota2, media;

    //Lendo a primeira nota
    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);

    //Lendo a segunda nota
    printf("Escreva a segunda nota: ");
    scanf("%f", &nota2);

    //Fazendo o calculo de media
    media = (nota1 + nota2) / 2;

    //Mostrando o resultado
    printf("A media das duas notas é = %.1f\n", media);
}