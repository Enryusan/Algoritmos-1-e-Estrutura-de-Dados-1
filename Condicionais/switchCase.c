#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    // Apresenta o menu
    printf("Menu          \n");
    printf("1 - Espresso  \n");
    printf("2 - Cappuccino\n");
    printf("3 - Macchiato \n");
    printf("Escolha uma das opções: ");

    // Lendo a opção
    int option;
    scanf("%d", &option);

    switch(option){
        case 1:
            printf("Seu Espresso ficaria pronto em breve");
            break;

        case 2:
            printf("Seu Cappuccino ficaria pronto em breve");
            break;

        case 3:
            printf("Seu Cappuccino ficaria pronto em breve");
            break;

        default:
            printf("Opção invalida!");
            break;
    }
}