#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "");

    int i;
    
        while(i !=10){

            printf("Digite o numero 10: ");
            scanf("%d", &i);
        }

        printf("Parabens, vc digitou corretamente\n");

        do{
            printf("Esse código será executado uma vez\nMesmo que a condição seja falsa\n");
            printf("Como i é igual a 10 por conta do while anterior, este do while não ira se repetir\n");
        } while (i != 10);
        
        
}