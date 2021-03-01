#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int somaDeDoisNumeros(int numero1, int numero2, int numero3);
	void mostrarnatela(void);
	
	int n1, n2, n3;
	
	
	printf("\n Dois numeros: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("Resultado = %d \n", somaDeDoisNumeros(n1, n2, n3));
	
	mostrarnatela();
	
	return 0;
}

int somaDeDoisNumeros(int numero1, int numero2, int numero3){
	
	return numero1 + numero2 + numero3;
}

void mostrarnatela(void){
	printf("\n Deu certo\n");
}



/*an = a1+q^(n-1) = 5

a1 = 1;
q = 2;
n = 3;


for(i = 1; i < n; i++){
	q *= i;
}

resultado = a1 + q;*/





