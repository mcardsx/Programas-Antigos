#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero;
    int contador = 1;  
    
printf("insira um numero \n");
scanf("%i", &numero);	
	if (numero > 0 && numero < 100) { 
		while(contador <= numero){
			
		
		printf("%i,", contador);	
		contador = contador + 2;
		}
		 
		 }
		
	
else{
printf("numero invalido \n");}	
	
return 0;}
