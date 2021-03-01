#include <stdio.h>
#include <stdlib.h>

int main () {
	 
	 float deposito;
	 int meses;
	 int ctd;  
	 float juros;
	 float lucro;
	 
	 
	 printf("valor do deposito \n");
	 	scanf("%f", &deposito);
	 printf("quantos meses voce quer que seu deposito renda? \n");
	 	scanf("%d", &meses);	



for(ctd=0; ctd<meses; ctd++){

 juros =  deposito * 0.05;

 lucro = deposito + juros;

	deposito = deposito + juros;
	
	
	
}

printf("\n seu lucro: %.2f \n", lucro);


return 0;}
