#include <stdio.h>

int main(){
    float n1=101, n2=101;
    while(n1 < 1 || n1 > 100 || n2 < 1 || n2 > 100){
        printf("Digite um valor real entre 1 e 100: ");
        scanf("%f", &n1);
        printf("Digite outro valor real entre 1 e 100: ");
        scanf("%f", &n2);
    }
    printf("A soma dos valores %.2f e %.2f equivale a %.2f", n1, n2, n1+n2);
    return 0;
}