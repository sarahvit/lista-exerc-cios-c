#include<stdio.h>
    int main(){
       int n, i, res;
    do{   
       
       printf("Digite o numero da tabuada que deseja: ");
       scanf("%d", &n);

       for(i=0; i<=10; i++){
                             printf("%d x %d= %d\n", n, i, n*i);
       }
       printf("\n1- Novo calculo");
       printf("\n2-Sair");
       printf("\nDigite a opcao desejada: ");
       scanf("%d", &res); 
  }while(res != 2);     
         



    return 0;
 }