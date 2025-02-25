#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "");

    int i = 0;

    while(i <= 10){

        //Imprime o valor de i e pula uma linha
        printf("%d\n", i);

        //Aumenta em 1 o valor de 1
        i = i + 1;

        //Esse código irá se repetir quando i for menor ou igual a 10
    }

    while (i > -1){
    
        //Imprime o valor de i e pula uma linha
        printf("%d\n", i);

        //Diminui em 1 o valor do i atual
        i -= 1;

        //Esse código irá se repetir quando i for maior que 
    }
    return 0;
}