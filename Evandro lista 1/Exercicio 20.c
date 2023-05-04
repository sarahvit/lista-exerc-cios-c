#include <stdio.h>

int main(){
    int n, menor=0, maior=0;
    while(n != 0){
        printf("Digite um numero:");
        scanf("%d", &n);
        if(menor == 0 && maior == 0){
            menor = n;
            maior = n;
        }else if(n!=0){
            if(n < menor){
                menor = n;
            } 
            if(n > maior){
                maior = n;
            }
        }
    }
    printf("O maior numero digitado foi %d, e o menor foi %d", maior, menor);
    return 0;
}