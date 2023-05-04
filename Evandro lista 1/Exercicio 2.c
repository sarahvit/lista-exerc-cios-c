#include<stdio.h>

int main(){
	
		float pi=3.14, raio, area;
		printf("               Calculador de area do circulo\n");
		printf("Digite o raio:");
		scanf("%f", &raio);
		
		area= pi*(raio*raio);

		printf("Resultado da area:%f", area);
		
		return 0;
		
}