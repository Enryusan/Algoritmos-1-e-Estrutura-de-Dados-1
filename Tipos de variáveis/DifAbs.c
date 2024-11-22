#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL,"");

    int a, b;

    printf("Escreva o seu primeiro valor:");
    scanf("%d", &a);

    printf("Escreva o seu segundo valor:");
    scanf("%d", &b);

    printf("A diferença entre os dois valores é %d\n", abs(a-b));

}