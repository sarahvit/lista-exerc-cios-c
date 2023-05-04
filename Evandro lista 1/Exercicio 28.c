#include <stdio.h>

int main(){
    int i, n[100] = {0}, c=0, j;
    printf("-----------------Calculando a soma dos numeros primos de 1 a 100-------------\n");
    for(i=2;i<=100;i++){
        if(n[i] == 0){
            for(j=i*i;j<=100;j+=i){
                n[j] = 1;
            }
        }
    }
    for(i=2;i<=100;i++){
        if(n[i]==0){
            c+=i;
        }
    }
    printf("A soma dos numeros primos é: %d", c);

    return 0;
}