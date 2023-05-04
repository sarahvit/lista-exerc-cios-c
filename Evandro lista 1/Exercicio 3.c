#include<stdio.h>

    int main(){
    	
        float alp, larp, ala, lara, AP, AA, result;

        printf("Qual a altura da parede?");
        scanf("%f", &alp);
        printf("Qual a largura da parede?");
        scanf("%f", &larp);
        printf("Qual a altura dos azulejos?");
        scanf("%f", &ala);
        printf("Qual a largura dos azulejos?");
        scanf("%f", &lara);

        AP= alp * larp;
        AA= ala * lara;
        result=AP/AA;
        
        printf("Serao necessarios %f azuleijos", result);

    return 0;
    }
