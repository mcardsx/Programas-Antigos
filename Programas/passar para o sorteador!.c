#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	
int main (){

char loguincadastrado[]="Mateus",senhacadastrada[]="cardoso", login[20], senha[20];

setlocale(LC_ALL, "portuguese");	

printf("insira seu login:\n");
	gets(login);
printf("insira sua senha v�lida:\n");
	gets(senha);
	if(strlen(senha)<6){
		printf("Uma senha v�lida precisa de pelo menos 6 car�cteres...\n \n");
	}

if(strcmp(loguincadastrado,login) == 0){
	if(strcmp(senhacadastrada,senha) == 0){
		printf("Voc� esta autenticado!\n");
	}
}
else(printf("Voc� inseriu login ou senha incorretos!"));

return 0;}
