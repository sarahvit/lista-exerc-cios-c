#include <stdio.h>

int main(){
    int base, exp, i, x;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &exp);
    x = base;
    for(i=1;i<exp;i++){
        x *= base;
    }
    printf("O resultado foi %d", x);
    return 0;
}