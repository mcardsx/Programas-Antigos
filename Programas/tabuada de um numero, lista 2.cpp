#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero;
	int contador = 1;
	
	printf("insira um numero \n");
	printf("\n seu numero :");
	scanf("%i", &numero);
	
	while(contador <= 10){
		
		printf("\n ordem crescente: \n");	
		printf("%d * %d = %d\n\n", numero, contador, numero * contador );
	
		contador++;
	}
	
	contador = 10;
	
	while(contador >= 1){
		
		printf("\n ordem decrescente");
		printf("\n %d * %d = %d\n\n", numero, contador, numero * contador );
		
		contador = contador -1;
	}

	
	
	
return 0;}
