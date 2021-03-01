#include <stdio.h>
#include <stdlib.h>

int main (){
	void testeVariavel(int x);
	void testePonteiro(int *Px);

int teste = 1;
//declarando um ponteiro que aponta para o endere�o de memoria de teste.
int *Pteste = &teste;

// neste caso o valor de x n�o altera, pq foi criado outro endere�o de memoria na fun��o testeVariavel.
//testeVariavel(teste);

// Aqui a fun��o recebe o endere�o de memoria da variavel x atraves do ponteiro, e altera seu valor no mesmo endere�o(n�o h� duplica��o).
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
