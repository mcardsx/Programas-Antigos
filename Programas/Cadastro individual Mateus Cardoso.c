#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX_ALUNOS 50

typedef struct{
	char nome[50];
	float notas[4];
	int ativo;
}Aluno;

Aluno alunos[MAX_ALUNOS];

void menu();
void cadastrar();
void remover();
void reprovados();
void aprovados();
void pesquisar();
void listar();
void salvar();
void ler();


void salvar(){
	FILE *arq = fopen("alunos.txt", "w");
	int i = 0;

	while(1){
		if(alunos[i].ativo){
			if(fwrite(&alunos[i], sizeof(Aluno), 1, arq) != 1){
				break;
			}
		}
		i++;
	}

	fclose(arq);
}

void ler(){
	FILE *arq = fopen("alunos.txt", "r");
	int i = 0;

	if(arq != NULL){

		while(fread(&alunos[i], sizeof(Aluno), 1, arq)){
			i++;
		}

		fclose(arq);
	}
}













int main (){
setlocale(LC_ALL,"");
ler();
menu();


return 0;}

void menu(){
int op;

do{
	system("cls");
	system("color 57");
	printf("\n1) Cadastrar Aluno\n2) Remover Aluno");
	printf("\n3) Alunos Reprovados\n4) Pesquisar Aluno");
	printf("\n5) Listar Alunos\n6) Alunos Aprovados\n0) Sair\n");
	
	scanf("%d", &op);
	
	switch(op){
		case 1:
		{
			cadastrar();
			break;
		}
		
		case 2:
		{
			remover();
			break;
		}
		
		case 3:
		{
			reprovados();
			break;
		}
		
		case 4:
		{
			pesquisar();
			break;
		}
		
		case 5:
		{
			listar();
			break;
		}
		
		case 6:
		{
			aprovados();
			break;
		}

		case 0:
			salvar();
			break;
			
		default:
			printf("\nDigite uma opção válida.\n");
			break;
	}
	getchar();

}while(op!=0);
	
}
void cadastrar(){
	
	char nome[50];
	float notas[4];
	int op, i;
	
	do{
	system("cls");
	fflush(stdin);
		
		printf("\nNome:");
		fgets(nome,sizeof(nome),stdin);
		
		printf("\n1º Bimestre:");
		scanf("%f", &notas[0]);
		
		printf("\n2º Bimestre:");
		scanf("%f", &notas[1]);
		
		printf("\n3º Bimestre:");
		scanf("%f", &notas[2]);
		
		printf("\n4º Bimestre:");
		scanf("%f", &notas[3]);
		
		printf("\n1) Cadastrar mais\n0) Sair\n");
		scanf("%d", &op);
		
		for(i = 0; i < MAX_ALUNOS; i++)
		{
			if(alunos[i].ativo == 0)
			{
				alunos[i].notas[0] = notas[0];
				alunos[i].notas[1] = notas[1];
				alunos[i].notas[2] = notas[2];
				alunos[i].notas[3] = notas[3];
				
				
				strcpy(alunos[i].nome, nome);
				
				alunos[i].ativo = 1;
				break;
			}
		}
		
		
	
	
	}while(op != 0);
}
void remover(){
	int matricula;
	listar();
	printf("\nDigite a matrícula do aluno a ser removido\n");
	scanf("%d", &matricula);
	matricula--;
	alunos[matricula].ativo = 0;
	printf("\n Aluno removido com sucesso!\n");
	
	getchar();
}
void reprovados(){
	system("cls");
	
	float media;
	int i, op;
	
do{
	printf("\n LISTA DE ALUNOS REPROVADOS\n");
	
	for(i = 0; i < MAX_ALUNOS; i++)
	{
		if(alunos[i].ativo == 1)
		{
			media = 0;
			media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
			media = media/4;
			
			if(media < 7.0)
			{
		printf("\n-------------\n");
		printf("Matricula: %d\n", i+1);
		printf("nome : %s\n", alunos[i].nome);
		printf("1º Bimestre : %0.1f\n", alunos[i].notas[0]);
		printf("2º Bimestre : %0.1f\n", alunos[i].notas[1]);
		printf("3º Bimestre : %0.1f\n", alunos[i].notas[2]);
		printf("4º Bimestre : %0.1f\n", alunos[i].notas[3]);
		printf("\nMedia = %0.2f\n", media);
		printf("\n-------------\n");	
			}
			
		printf("\n1) Mostrar mais\n0) Sair\n");
		scanf("%d", &op);
	
		}
	}
}while(op != 0);	
}
void pesquisar(){
	fflush(stdin);
	char nome[50];
	int i, op;
	do{
	system("cls");
	
	printf("Digite o Nome do Aluno Para Pesquisar:\n");
	fgets(nome,sizeof(nome),stdin);
	for(i=0; i < MAX_ALUNOS; i++)
	{
	if(alunos[i].ativo == 1)
	{
		if(strstr(alunos[i].nome,nome) != NULL)
		{
		printf("\n-------------\n");
		printf("Matricula: %d\n", i+1);
		printf("nome : %s\n", alunos[i].nome);
		printf("1º Bimestre : %0.1f\n", alunos[i].notas[0]);
		printf("2º Bimestre : %0.1f\n", alunos[i].notas[1]);
		printf("3º Bimestre : %0.1f\n", alunos[i].notas[2]);
		printf("4º Bimestre : %0.1f\n", alunos[i].notas[3]);
		printf("\n-------------\n");
		}
	}
	}
		printf("1) pesquisar novamente\n0) Sair\n");
		scanf("%d", &op);
		getchar();	
  }while(op != 0);
}
void listar(){
	
	system("cls");
	int i = 0;
	

	while(alunos[i].ativo == 1){
		printf("\n-------------\n");
		printf("Matricula: %d\n", i+1);
		printf("nome : %s\n", alunos[i].nome);
		printf("1º Bimestre : %0.1f\n", alunos[i].notas[0]);
		printf("2º Bimestre : %0.1f\n", alunos[i].notas[1]);
		printf("3º Bimestre : %0.1f\n", alunos[i].notas[2]);
		printf("4º Bimestre : %0.1f\n", alunos[i].notas[3]);
		i++;
		printf("\n-------------\n");
	}


	system("pause");

}

void aprovados(){
	system("cls");
	
	char nome;
	float media;
	int i, op;
	
do{
	printf("\n LISTA DE ALUNOS APROVADOS\n");
	
	for(i = 0; i < MAX_ALUNOS; i++)
	{
		if(alunos[i].ativo == 1)
		{
			media = 0;
			media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
			media = media/4;
			
			if(media >= 7.0)
			{
		printf("\n-------------\n");
		printf("Matricula: %d\n", i+1);
		printf("nome : %s\n", alunos[i].nome);
		printf("1º Bimestre : %0.1f\n", alunos[i].notas[0]);
		printf("2º Bimestre : %0.1f\n", alunos[i].notas[1]);
		printf("3º Bimestre : %0.1f\n", alunos[i].notas[2]);
		printf("4º Bimestre : %0.1f\n", alunos[i].notas[3]);
		printf("\nMedia = %0.2f\n", media);
		printf("\n PARABÉNS %s! \n", alunos[i].nome);
		printf("\n-------------\n");	
			}
			
		printf("\n1) Mostrar mais\n0) Sair\n");
		scanf("%d", &op);
	
		}
	}
}while(op != 0);
}
