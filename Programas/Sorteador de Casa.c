#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

struct usuario{
	char login[20];
	char senha[20];
}Mateus,Babi,Mae;

struct usuario DadosDoUsuario (void);

int main(){
setlocale(LC_ALL, "portuguese");
void Sorteador ();
void Menu ();

Menu ();
	
Sorteador();

return 0;}

void Sorteador (void){
char sorteio[9][20]={"Lavar Banheiro", "Varrer Casa", "Passar Pano", "Lavar Roupa", "Lavar Lou�a", "Fazer Almo�o", "Tirar po dos mov�is", "Trocar len��es", "Limpar fog�o"};	
int Nusuario[3];
int i;
/* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
  com o valor da fun��o time(NULL). Este por sua vez, � calculado
  como sendo o total de segundos passados desde 1 de janeiro de 1970
  at� a data atual.
  Desta forma, a cada execu��o o valor da "semente" ser� diferente.
  */
srand(time(NULL));


for(i=0;i<3;i++){
	Nusuario[i]= rand()%8;
}
printf("\nSeus 3 Numeros foram:\n %d,%d e %d", Nusuario[0], Nusuario[1], Nusuario[2]);

for (i=0;i<3;i++){
	printf("\nSua %d� Atividade ser�: %s\n", i+1, sorteio[Nusuario[i]]);
}
}

void Menu (){

char login[20], senha[20];
int resposta;
	
	do{
		printf(">>>>>>>>>>>>>>>>Bem Vindo!<<<<<<<<<<<<<<<<<\n");
		printf(">>>                                     <<<\n");
		printf(">>>             Login (1)               <<<\n");
		printf(">>>                                     <<<\n");
		printf(">>>            Registro (2)             <<<\n");
		printf(">>>                                     <<<\n");
		printf(">>>          Visualiza��o (3)           <<<\n");
	    printf(">>>                                     <<<\n");
	    printf(">>>              Sair (4)               <<<\n");
	    printf(">>>                                     <<<\n");
		printf(">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<\n");
	
printf("\nDigite uma op��o v�lida:\n");
	scanf("%d", &resposta);

	switch(resposta){
		
		case 1:
			printf("voc� escolheu a primeira op��o!\n");
		
			printf("Digite seu login:\n");
				scanf("%s", &login);
					fflush(stdin);
			printf("Digite sua senha:\n");
				scanf("%s", &senha);
			
		break;
		
		case 2:
			printf("voc� escolheu a segunda op��o!\n");
		
		DadosDoUsuario ();
		
		break;
		
		case 3:
			printf("voc� escolheu a terceira op��o!\n");	
		break;
		
		case 4:
			printf("voc� escolheu a quarta op��o!\n");
		break;
		
		default:
			printf("Op��o Invalida!, Digite uma op��o Correta!\n");
		break;}
	
	
	
	
	}while(resposta>0);
		while(resposta <4);
	
}

struct usuario DadosDoUsuario (void){

printf("\nDigite Seu Login:\n");
	scanf("%s", &Mateus.login);
printf("Digite Sua Senha:\n");
	scanf("%s", &Mateus.senha);

return Mateus;}
