#include <stdio.h>

int main(){
    int alunos[10], i, nota, nota2, c=0;
    
    for(i=1;i<=10;i++){
        
        printf("Digite a 1° nota do aluno %d: ", i);
        scanf("%d", &nota);
        printf("Digite a 2° nota do aluno %d: ", i);
        scanf("%d", &nota2);
        alunos[i] = (nota+nota2) / 2;
    }
    while(c != 1){
        printf("Visualizar a media do aluno numero? [0] - Para todas as medias: ");
        scanf("%d", &i);
        if(i==0){
            for(i=1;i<=10;i++){
                printf("%d° Aluno = %d\n", i, alunos[i]);
            }
        } else{
            printf("Aluno %d = %d", i, alunos[i]);
        }
        printf("\nDeseja continuar?\n [0] - Sim\n [1] - Encerrar programa\n");
        scanf("%d", &c);
    }
    return 0;
}