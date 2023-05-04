#include<stdio.h>
    int main(){
        int num;
        
        printf("Digite um nuemro:");
        scanf("%d", &num);

        if(num >= 100 && num <=200){
            printf("Esse numero esta entre 100 e 200!");

        }else{
            printf("Esse numero nao esta entre 100 e 200!");
        }

        return 0;
    }