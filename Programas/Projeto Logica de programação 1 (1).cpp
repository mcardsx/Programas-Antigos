#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Programa criado pelos alunos da UPE Gabriel Henrique, Mateus Cardoso, Raffael Victor na matéria de LP1 com o professor Carvalho
typedef struct{
	char nome[100];
	char RG[50];
	char cpf[50];
	int saldo;
}lista;

int cadastro(int *ptqntdd);
void listar(int qntD);
//void pesquisar(int qntD);
void transacao(int qntdD);

int main(void){
	

	int escolha, menu = 1, qntd, y;
	#define y = 4;
	int *ptqntd = &qntd;//aqui foi criado um ponteiro para definição de usuarios e sera usado na função cadastro e na função listar
	
	do{//laço do-while para a criação de um menu
		printf("\n |-----------------------------------------------|");
	printf("\n |                BANCO UPE 2019                 |");
	printf("\n |-----------------------------------------------|\n\n");
	printf("               -Escolha uma das opcoes:\n\n");
	printf("                |-------------------|\n");
  	printf("                | 1.   Cadastrar    |\n");
    printf("                |-------------------|\n");
    printf("                | 2.   Pesquisar    |\n");      
    printf("                |-------------------|\n");
    printf("                | 3.    Listar      |\n");      
    printf("                |-------------------|\n");
    printf("                | 4.    Ordenar     |\n"); 
    printf("                |-------------------|\n");
    printf("                | 5.   Transacao    |\n");
	printf("                |-------------------|\n");
	printf("                | 6.     Sair       |\n");
	printf("                |-------------------|\n");
	
	scanf("%d", &escolha);
	fflush(stdin);
	
	switch(escolha){//stwich case para a esolha de opções do menu
		case 1:{
			
			cadastro(ptqntd);//chamando a função cadastro e passando um ponteiro como parametro
			break;
		}
		
		case 2:{
			printf("\n\n\tInfelizmente não possuímos essa opção no momento, tente outra ;)");
			break;
		}
		
		case 3:{
			listar(qntd);//passando uma variavel q teve seu valor alterado na função cadastro através de um ponteiro, e a passando como parametro
			break;
		}
		
		case 4:{
			printf("\n\n\n\tEstamos ordenando a sua lisa de contas :)\n\n\n");
			break;
		}
		
		case 5:{
			transacao(qntd);//passando uma variavel q teve seu valor alterado na função cadastro através de um ponteiro, e a passando como parametro
			break;
		}
		
		case 6:{
			menu++;
			break;
		}
	}
	
	
	}while(menu == 1);
	
}

int cadastro(int *ptqntdd){//essa função tem como objetivo afzer o cadastro das contas e os salvar num arquivo.txt
	
	int i, x ;//variaveis q vão servir para a criação de contas
	
	FILE *arquivo;
	arquivo = fopen("Cadastros.txt","w");//criando um arquivo para escrita(w) e permitindo o programa escrever no mesmo
	
	printf("\nEscolha quantos usuarios voce deseja cadastrar:");
	scanf("%i", ptqntdd);//pega quantas conats o programa vai rodar
	fflush(stdin);

	x = *ptqntdd;// iguala o valor do ponteiro à x para poder usar a variavel x no lugar do ponteiro nesta função
	 lista cadastro[20];
	
	for(i = 0; i < x ; i++){//for para o preenchimento de dados das contas
		
		printf("\nInforme o Nome da conta %d:", i);
		gets(cadastro[i].nome);
		fprintf(arquivo,"%s", cadastro[i].nome);
		
		printf("\nInforme o RG da conta %i:", i);
		gets(cadastro[i].RG);
		fprintf(arquivo,"\n%s", cadastro[i].RG);
		
		printf("\nInforme o CPF da conta %i:", i);
		gets(cadastro[i].cpf);
		fprintf(arquivo,"\n%s", cadastro[i].cpf);
		
		printf("\nInforme o Saldo da conta %i:", i);
		scanf("%d", &cadastro[i].saldo);
		fflush(stdin);
		fprintf(arquivo,"\n%d",cadastro[i].saldo);
	}
	
	fclose(arquivo);//fecha o arquivo
	return *ptqntdd;//retorna o valor do ponteiro alterando assim a variavel correspondente a ele na função main
	
	
	
		
}

void listar(int qntD){//esa função pega o valor da quantidade de cadastros q foi alterado através de um ponteiro e a usa p listar as contas
	
	FILE *arquivos; //defini um ponteiro p abrir o arquivo
	arquivos = fopen("Cadastros.txt", "r");//abre um arquivo ja criado anteriormente soq dessa vez apenas para poder retirar informações dele
	int i,saldo;
	lista cadastro[qntD];
	
	for(i = 0; i < qntD; i++){//usa a variavel obtida commo parametro da main para poder listar as contas
		
		fgets(cadastro[i].nome, 50, arquivos);
		printf("\n\n\tNome da conta %i: %s", i, cadastro[i].nome);
		fflush(stdin);
		
		fgets(cadastro[i].RG, 20, arquivos);
		printf("\tRG da conta %i: %s", i, cadastro[i].RG);
		
		fgets(cadastro[i].cpf, 20, arquivos);
		printf("\tCPF da conta %i: %s", i, cadastro[i].cpf);
		
		fscanf(arquivos, "%i", &cadastro[i].saldo);
		fflush(stdin);
		printf("\tSaldo da conta %i: %i", i, cadastro[i].saldo);
	}
	
	
	
	
	fclose(arquivos);//fecha o arquivo
}

void transacao(int qntD){
	
FILE *arquivos;
	arquivos = fopen("Cadastros.txt", "r");//abre um arquivo criado anteriormente paar poder retirar as informações dele
	int i, x, saldo, novosaldo;//variaveis necessarias para a realocação do saldo nas contas
	lista cadastro[qntD];
	
	for(i = 0; i < qntD; i++){//usa um for para listar as possiveis contas para transação
		
		fgets(cadastro[i].nome, 50, arquivos);
		printf("\n\n\tNome da conta %i: %s", i, cadastro[i].nome);
		fflush(stdin);
		
		fgets(cadastro[i].RG, 20, arquivos);
		printf("\tRG da conta %i: %s", i, cadastro[i].RG);
		
		fgets(cadastro[i].cpf, 20, arquivos);
		printf("\tCPF da conta %i: %s", i, cadastro[i].cpf);
		
		fscanf(arquivos, "%i", &cadastro[i].saldo);
		fflush(stdin);
		printf("\tSaldo da conta %i: %i", i, cadastro[i].saldo);
	}
	
	printf("\n\nDe qual conta vc deseja tirar o dinheiro?(Digite o NUmero da conta)");
	scanf("%i", &i);//escolhe a conta para a retirada do saldo
	fflush(stdin);
	
	printf("\n\n\n\Esta e a conta que voce selecionou para retirar o dinheiro:");
	
	fgets(cadastro[i].nome, 50, arquivos);
		printf("\n\n\tNome da conta %i: %s", i, cadastro[i].nome);
		fflush(stdin);
		
		fgets(cadastro[i].RG, 20, arquivos);
		printf("\tRG da conta %i: %s", i, cadastro[i].RG);
		
		fgets(cadastro[i].cpf, 20, arquivos);
		printf("\tCPF da conta %i: %s", i, cadastro[i].cpf);
		
		fscanf(arquivos, "%i", &cadastro[i].saldo);
		fflush(stdin);
		printf("\t\nSaldo da conta %i: %i", i, cadastro[i].saldo);
		
		printf("\n\nQuanto do saldo da conta vc deseja retirar para o deposito?");
		scanf("%i", &novosaldo);//pega o saldo q vai ser retirado
		fflush(stdin);
		
		cadastro[i].saldo = cadastro[i].saldo - novosaldo;//faz o calculo do saldo restante da conta que teve seu saldo alterado
		
		printf("\n\nO valor de RS%i sera debitado de sua conta", novosaldo);
		printf("\nDeseja transferir esse valor para que conta?");
		scanf("%i", &x);//usa a variavel x para a definição da segunda conta
		fflush(stdin);
		
		printf("\n\nO valor de %i foi transferido para a conta de numero: %i", novosaldo, i);
		
		printf("\nO Novo saldo das contas selecionadas e:");
		
		
		cadastro[x].saldo = cadastro[x].saldo + novosaldo;//calcula o saldo alterado da conta onde o dinheiro foi depositado
		
		//imprime os dados das contas que foram alteradas
		fgets(cadastro[i].nome, 50, arquivos);
		printf("\n\nNome da conta %i: %s", i, cadastro[i].nome);
		fflush(stdin);
		
		fgets(cadastro[i].RG, 20, arquivos);
		printf("\tRG da conta %i: %s", i, cadastro[i].RG);
		
		fgets(cadastro[i].cpf, 20, arquivos);
		printf("\tCPF da conta %i: %s", x, cadastro[i].cpf);
		
		printf("\tSaldo da conta %i: %i", x, cadastro[i].saldo);
		
		
		fgets(cadastro[x].nome, 50, arquivos);
		printf("\n\nNome da conta %i: %s", x, cadastro[x].nome);
		fflush(stdin);
		
		fgets(cadastro[x].RG, 20, arquivos);
		printf("\tRG da conta %i: %s", x, cadastro[x].RG);
		
		fgets(cadastro[x].cpf, 20, arquivos);
		printf("\tCPF da conta %i: %s", x, cadastro[x].cpf);
		
		printf("\tSaldo da conta %i: %i", x, cadastro[x].saldo);
		
	
	
	
	
	fclose(arquivos);//fecha o arquivo
	
}
