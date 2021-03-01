#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct pessoa{
	char nome[50];
	int idade;
	char sexo;
	float altura;
}pessoa;

int main (){
void ImprimirPessoa(void);

setlocale(LC_ALL, "portuguese");

printf("Digite seu nome:\n");
	gets(pessoa.nome);
	
printf("Digite sua idade:\n");
	scanf("%d", &pessoa.idade);
	
	fflush(stdin);
	
printf("Qual é o seu sexo? 'M' Para Masculino 'F' Para Feminino...\n");
	scanf("%c", &pessoa.sexo);
	
printf("qual é a sua altura em metros?\n");
	scanf("%f", &pessoa.altura);		

ImprimirPessoa();

return 0;}


void ImprimirPessoa(void){

	strlen(pessoa.nome);
printf("\nNome: %s (%d caracteres)\n", pessoa.nome, strlen(pessoa.nome));

printf("Idade: %d Anos\n", pessoa.idade);
printf("Sexo: '%c'\n", pessoa.sexo);
printf("Altura: %.2f\n", pessoa.altura);

}
