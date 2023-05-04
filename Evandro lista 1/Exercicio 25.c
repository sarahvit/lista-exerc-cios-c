#include <stdio.h>
#include <string.h>

int main(){
    float nota[17], maior=0;
    char nomes[16][50];
    int i, venc;
    for(i=1;i<=16;i++){
        printf("Digite o nome e a nota da %d° candidata: ", i);
        scanf("%s %f", nomes[i], &nota[i]);
        if(nota[i] > maior){
            maior = nota[i];
            venc = i;
        }
    }
    printf("A vencedora foi %s, com nota de %.1f", nomes[venc], nota[venc]);
    return 0;
}