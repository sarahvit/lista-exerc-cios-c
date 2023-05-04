#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
			
    int ant2 = 0, ant1 = 1, atual, i;


        printf("Série Fibonacci(20 primeiros termos:)\n");
        printf("%d ", ant2);
        printf("%d ", ant1);

        for(i=3;i <=20; i++){
        atual = ant2 + ant1;
        printf("%d ", atual);
        ant2 = ant1;
        ant1 = atual;
        
    }
    printf("\n");
    system("pause");
    return 0;
}