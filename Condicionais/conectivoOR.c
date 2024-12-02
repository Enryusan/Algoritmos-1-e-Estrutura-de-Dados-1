#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    
    setlocale(LC_ALL, "");

    int pessoa1, pessoa2;

    printf("Escreva a idade da primeira pessoa: ");
    scanf("%d", &pessoa1);
    printf("Escreva a idade da segunda pessoa: ");
    scanf("%d", &pessoa2);

    // Se apenas uma das pessoas ser maior de idade, o menor de idade pode entrar acompanhado.
    if(pessoa1 >= 18 || pessoa2 >= 18){
        printf("Podem entrar ambos\n");
    }
    else{
        printf("Vocês não podem entrar\n");
    }
}