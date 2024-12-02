#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
int main(void){

    setlocale(LC_ALL,"");
    //Definindo Variáveis
    int a = 6, b = 4;

    //Soma
    printf("\nA soma de %d e %d = %d",a , b, a + b);

    //Subtração
    printf("\nA subtração de %d e %d = %d",a , b, a - b);

    //Divisão
    printf("\nA divisão de %d e %d = %d",a , b, a / b);

    //Multiplicação
    printf("\nA multiplicação de %d e %d = %d",a , b, a * b);

    //Resto da Divisão
    printf("\nO resto da divisão entre %d e %d = %d",a , b, a % b);

    //Valor Absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

}
