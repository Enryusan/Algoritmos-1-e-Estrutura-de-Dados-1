#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int n1, n2, n3, res;

    printf("Escreva 3 números:");
    scanf("%d %d %d", &n1, &n2, &n3);

    res = n1 * n2 * n3;
    
    printf("O resultado da multiplicação dos 3 números é %d:\n", res);
}