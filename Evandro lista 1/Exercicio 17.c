#include <stdio.h>

int main(){
    int n[11], i, c=0;
    for(i=1;i<=10;i++){
        printf("Digite o %d° numero: ", i);
        scanf("%d", &n[i]);
        c += n[i];
    }
    printf("Soma dos numeros = %d", c);
    return 0;
}