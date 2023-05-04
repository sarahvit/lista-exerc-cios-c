#include<stdio.h>
    int main(){
        int i;
        
    printf("----------Numeros impares e 100 a 200----------\n");
    
         for(i=101;i<200;i++)
         if((i %2) !=0){
                printf("%d ", +i);
            }    
    return 0;
 }