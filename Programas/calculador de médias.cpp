#include <stdio.h>
#include <stdlib.h>

	int main () {
		
		float nota1, nota2, nota3;
		float media;
	
	printf("insira a primeira nota \n");
		scanf("%f", &nota1);
	printf("insira a segunda nota\n");
		scanf("%f", &nota2);
	printf("insira a terceira nota\n");
		scanf("%f", &nota3);
			
			media = (nota1+nota2+nota3)/3;
	
		if (media >= 9) {
	printf("\n media = %f", media);
	printf("\n nivel A");
	}

		if ( media < 9) {
			if (media >= 7.5) {
			
		printf ("\n media = %f", media);
		printf ("\n nivel B"); 
			}	
	}
	
		if (media < 7.5) { 
			if (media >= 6 ) { 
		printf ("\n media = %f", media);
		printf("\n nivel C");	
		    }    
	}
		
		if (media < 6) {
			if (media >= 4) {
		printf("\n media = %f", media);
		printf("\n nivel D");		
			}	
	}	
	
		if (media < 4) {
	printf("\n media = %f", media);	
	printf("\n nivel E");	
		}		 
		
	return 0; }		
