#include <stdio.h>
#include <stdlib.h>

int main (){

// Definindo a Struct horario.
struct horario{
	int *Phora;
	int *Pminutos;
	int *Psegundos;
};
//declarando uma struct do tipo horario, nome = hoje.
struct horario hoje;

//declarando 3 variáveis.
	int hora = 100;
	int minutos = 300;
	int segundos = 500;
	
	
//apontando os ponteiros da struct hoje para as variáveis.
hoje.Phora = &hora;
hoje.Pminutos = &minutos;
hoje.Psegundos = &segundos;

//printando os ponteiros da struct hoje.
printf("%i:%i:%i", *hoje.Phora, *hoje.Pminutos, *hoje.Psegundos);

//Alterando valor do membro(ponteiro) da struct hoje do tipo horario 
*hoje.Psegundos = 1000;

printf("\n%i", *hoje.Psegundos);

getchar();
	
return 0;}
