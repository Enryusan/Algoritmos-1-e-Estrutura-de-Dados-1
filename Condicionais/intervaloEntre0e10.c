#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    
    setlocale(LC_ALL, "");

    int int1;

    printf("Escreva um numero para verificar se está entre 0 e 10: ");
    scanf("%d", &int1);

    // Se apenas uma das pessoas ser maior de idade, o menor de idade pode entrar acompanhado.
    if(int1 > 0 && int1 < 10){
        printf("Seu numero está entre 0 e 10\n");
    }
    else{
        printf("Seu numero não está entre 0 e 10\n");
    }
}