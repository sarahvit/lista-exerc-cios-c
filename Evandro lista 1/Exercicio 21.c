#include <stdio.h>
#include <locale.h>

int main(){

    char sexo;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Informe seu sexo: M/F\n");
    scanf("%c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        printf("Você é do sexo Másculino\n");
    } else if(sexo == 'F' || sexo == 'f'){
        printf("Você é do sexo Feminino\n");
    } else{
        printf("Opção inválida!\n");
    }
    return 0;
}