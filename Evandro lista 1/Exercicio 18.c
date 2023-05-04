#include <stdio.h>

int main(){
    int n, i=0, c=0;
    while(n != 0){
        i += 1;
        printf("Digite o %d° numero: ", i);
        scanf("%d", &n);
        c += n;
    }

    printf("Soma dos numeros = %d", c);
    return 0;
}