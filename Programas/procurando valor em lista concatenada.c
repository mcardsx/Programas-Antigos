#include <stdio.h>
#include <stdlib.h>

struct lista{
	int valor;
	struct lista *proximo;
};
//Função que retorna endereço de um ponteiro que aponta para uma struct lista.
struct lista *procurarValor(struct lista *pLista, int valor){
	//recebe membro da lista concatenada pLista.
	while(pLista != 0){
		//se o ponteiro pLista apontando para valor for igual ao valor do usuario, retornamos o endereço do ponteiro.
		if(pLista-> valor == valor){
			return (pLista);
		}
		// se não, avançamos para o proximo membro da lsita concatenada.
		else{
		pLista = pLista -> proximo;	
		}
	}
    // caso não encontre valor igual retornamos nulo.
	return 0;
}

int main (){
	struct lista *procurarValor(struct lista *pLista, int valor);

struct lista m1, m2, m3;
struct lista *resultado, *gancho = &m1;

int valor;

m1.valor= 5;
m1.proximo = &m2;

m2.valor = 10;
m2.proximo = &m3;

m3.valor = 15;
m3.proximo = 0;

printf("Digite o valor da pesquisa:\n ");
scanf("%i", &valor);

resultado = procurarValor(gancho, valor);

if(resultado == 0){
	printf("Valor nao encontrado!\n");
}
else{
	printf("valor %i encontrado\n", resultado->valor);
}
getchar();

return 0;}
