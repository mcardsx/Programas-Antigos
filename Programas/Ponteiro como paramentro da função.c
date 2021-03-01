#include <stdio.h>
#include <stdlib.h>

int main (){
	void testeVariavel(int x);
	void testePonteiro(int *Px);

int teste = 1;
//declarando um ponteiro que aponta para o endereço de memoria de teste.
int *Pteste = &teste;

// neste caso o valor de x não altera, pq foi criado outro endereço de memoria na função testeVariavel.
//testeVariavel(teste);

// Aqui a função recebe o endereço de memoria da variavel x atraves do ponteiro, e altera seu valor no mesmo endereço(não há duplicação).
testePonteiro(Pteste);

printf("%i\n", teste);

getchar();

return 0;}

void testeVariavel(int x){
	
	++x;
	
}

void testePonteiro(int *Px){
	++*Px;
}
