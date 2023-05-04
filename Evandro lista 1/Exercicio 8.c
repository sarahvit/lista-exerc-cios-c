#include<stdio.h>
    int main(){
            int n1, n2, n3;
            
            printf("Digite o primeiro numero:");
            scanf("%d", &n1);
            printf("Digite o segundo numero:");
            scanf("%d", &n2);
            printf("Digite o terceiro numero:");
            scanf("%d", &n3);
            
            
            if (n1 == n2 && n2 == n3){
                    printf("Todos os numeros sao iguais!");

           }else if (n1 == n2 && n2 != n3){
                    printf("Somente o primeiro e segundo numero sao iguais!");    
           }else if(n1 != n2 && n2 == n3){
                    printf("Somente os dois ultimos numeros sao iguais!");

           }else if(n1==n3 && n1!=n2 ){
                    printf("Somente o primeiro e o terceiro numero sao iguais!");
           }else if (n1 != n2 && n2 !=n3){
                    printf("Nenhum numero é igual!");
           }


        return 0;
    }