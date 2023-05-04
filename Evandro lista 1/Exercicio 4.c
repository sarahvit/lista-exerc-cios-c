#include<stdio.h>
    int main(){
        int perm, din;

        printf("Voce tem permissao? (0 - nao, 1 - sim)");
        scanf("%d", &perm);
        printf("Voce tem dinheiro? (0 - nao, 1 - sim)");
        scanf("%d", &din);

        if(perm && din){
                        printf("Voce vai ao evento!");

        }else{
                        printf("Voce nao vai ao evento!");    
        }

    return 0;            
    }