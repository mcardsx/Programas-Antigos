#include <stdio.h>
#include <stdlib.h>

int main (){
	
struct lista {
	int valor;
	//ponteiro de nome proximo, que aponta para um struct de tipo lista.
	struct lista *proximo;
};

struct lista m1, m2, m3;
//ponteiro de nome gancho, aponta para uma struct do tipo lista, esta apontando para o endereço de m1.
struct lista *gancho = &m1;

m1.valor = 10;
m2.valor = 20;
m3.valor = 30;

m1.proximo = &m2;
m2.proximo = &m3;
m3.proximo = 0;

while(gancho != 0){
	// printando gancho apontando para o valor da struct m1.
	printf("%i\n", gancho-> valor);
	// gancho aponta para o *proximo de m1 que é m2.(linha 20)
	gancho = gancho-> proximo; 
}
return 0;}
