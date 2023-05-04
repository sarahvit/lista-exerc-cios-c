#include<stdio.h>
    int main(){

        float emp, salar, par, vpar;

        printf("Qual o valor do empréstimo que deseja?");
        scanf("%f", &emp);
        printf("Qual o número de parcelas:");
        scanf("%f", &par);
        printf("Seu salário:");
        scanf("%f", &salar);

        vpar = emp/par;

        if (vpar <= (0.3*salar))
        {
           printf("É possível fazer o empréstimo!!");
        } else{
           printf("Nao é possível fazer o empréstimo!");
        }
        

        return 0;
    }