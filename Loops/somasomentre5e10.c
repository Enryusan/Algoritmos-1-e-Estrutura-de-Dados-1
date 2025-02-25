#include <stdio.h>

int main(){
    
    int a = 0, b=0;
    
    while((a > 10 || a < 5) || (b > 10 || b< 5)){
        printf("Digite 2 valores entre 10 e 5: ");
        scanf("%d %d", &a, &b);
    }
        printf("A soma é = %d\n", a + b);
}