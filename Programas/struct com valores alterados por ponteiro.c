#include <stdio.h>
#include <stdlib.h>

int main (){
	
struct horario{
	int hora;
	int minutos;
	int segundos;
};

//declarando duas struct do tipo horario, agora e depois(ponteiro que aponta para o endere�o de mem�ria de agora).
struct horario agora, *depois = &agora;

//definindo os valores dos membros de depois. (que est�o no endere�o de memoria de agora).
(*depois).hora = 20;
depois->minutos = 30;
depois->segundos = 40;
//printando os valores dos membros de agora (que j� foram definidos por *depois)
printf("%i:%i:%i", agora.hora, agora.minutos, agora.segundos);



getchar();

return 0;}

