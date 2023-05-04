#include <stdio.h>

int main(){
    float n, i, c=0, s;
    printf("Digite um numero");
    scanf("%f", &n);
    s = n;
    for(i=n-1;i>0;i-=1){
        c = n * i;
        n = c;
    }
    printf("O fatorial de %.0f equivale a %.1f", s, c);
    return  0;
}