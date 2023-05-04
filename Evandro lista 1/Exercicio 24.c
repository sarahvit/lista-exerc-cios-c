#include <stdio.h>

int main(){
    float jog[13], media;
    int i;
    for(i=1;i<=12;i++){
        printf("Digite a altura do %d° jogador:", i);
        scanf("%f", &jog[i]);
        media += jog[i];
    }
    media = media/12;
    printf("Os jogadores do time tem uma media de %.2f", media);
    return 0;
}