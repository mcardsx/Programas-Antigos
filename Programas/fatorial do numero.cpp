#include <stdio.h>
#include <stdlib.h>
// fazer uma função que calcula o fatorial de um numero
int main () {
	
	int numero; 
	int contador;
	
	printf ("insera um numero \n");
	scanf("%d", &numero);
	
	contador = numero-1;
	
	while (contador >0) {
		
		printf("%d * %d= %d\n", numero, contador, numero * contador );
		
		contador = contador -1; 
	}
	
return 0;}
