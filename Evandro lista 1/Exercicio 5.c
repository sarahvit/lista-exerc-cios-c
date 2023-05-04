#include<stdio.h>
    int main(){
        int sexo, saude;

        printf("Qual seu sexo? (0 - fem, 1 - masc)");
        scanf("%d", &sexo);
        

        if(sexo == 1){
           printf("Voce possui algum problema de saude? (0 - nao, 1 - sim)");
           scanf("%d", &saude);
        }else{
            printf("Voce nao pode se alistar!");
        
        }
        if(saude == 0){
            printf("Voce pode se alistar!");
        }else if (saude == 1){
            printf("Voce nao pode se alistar!");
        }
        
        return 0;
    }