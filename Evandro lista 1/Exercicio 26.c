#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i, f=0;
    printf("Digite um numero");
    scanf("%d", &n);
    for(i=n-1;i>0;i--){
        if(n%i==0 && i!=1){
            f = 1;
        }
    }
    if(f==0){
        printf("O numero é primo!");
    } else{
        printf("O número não é primo, já que ele é divisível por: ");
        for(i=n-1;i>0;i--){
            if(n%i==0){
                printf("%d ", i);
            }
    }
    }
    return 0;
}