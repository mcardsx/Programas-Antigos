#include <stdio.h>
#include <stdlib.h>
// ler 10 numeros, imprimir a soma do maior e menor numero
// programa travou, problema no scanf!'&'
int main () {
	
	float numero;
	int contador = 0;
	float maior_numero = -1;
	float menor_numero;
	
		
	while(contador < 10){
		
		printf("insira um numero \n");
		scanf("%f", &numero);
		
			if(maior_numero < numero) {
				
				maior_numero = numero;
			}
				if(numero < maior_numero) {
					
					menor_numero = numero;
					
				}	
					if(menor_numero>numero){
						menor_numero = numero;
					}
					
					
		contador++;
		
		}
		

					printf("%f/n", maior_numero);
					printf("%f/n", menor_numero);
	
return 0;
}
