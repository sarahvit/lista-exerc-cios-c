#include<stdio.h>
#include<locale.h>

    int main(){
        setlocale(LC_ALL, "portuguese");
        int n1, n2, i;

        printf("Escreva o primeiro número: \n");
        scanf("%d", &n1);
        printf("Escreva o segundo número: \n");
        scanf("%d", &n2);

        printf("Esses são os números: ");

        for (i = n1; i <=n2; i++)
        {
            printf("%d ", i);
        }
        
    
        return 0;
    }