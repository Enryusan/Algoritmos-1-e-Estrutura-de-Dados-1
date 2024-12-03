#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa de calculadora, que leia dois valores e mostre
as opções de somar ou subtrair.
Após selecionar a opção, o resultado será mostrado na tela, baseado em switch.
*/

int main(void){
    setlocale(LC_ALL, "");

    int option, a ,b;

    //Escolhendo a operação
    printf("Operações disponíveis\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("Digite a operação desejada: ");
    scanf("%d", &option);

    //Encerra programa em caso de erro
    if(option == 1 || option == 2){
    
    //Lendo o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    //Lendo o segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    }
    else{
        printf("Opção invalida!\n");
        return 0; 
    }

    //Executando a operação solicitada
    switch(option)
    {
    case 1:
        printf("Resultado = %d\n", a+b);
        break;

    case 2:
        printf("Resultado = %d\n", a-b);
        break;
    }
}