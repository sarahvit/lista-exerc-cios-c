#include <stdio.h>

int main(){
    int n, i=0, c=0, ipar=0;
    while(n != 0){
        i += 1;
        printf("Digite o %d° numero: ", i);
        scanf("%d", &n);
        if(n%2 == 0 && n != 0){
            ipar += 1;
            c += n;
        }
    }
    printf("Media dos numeros pares = %d", c/ipar);
    return 0;
}