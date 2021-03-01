#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main (){

void um ();
void dois();
void tres();
void quatro();
void cinco();
void seis ();
void oito ();
void nove();
void dez();
void onze();
void doze();
void treze();
void quatorze();
void quinze();
void dezesseis();

setlocale(LC_ALL,"");

int op;	

do{
system("cls");
system("color 5F");

printf("------SOLU��ES------\n\n");
printf("Escolha uma Quest�o:\n\n");
printf("----------SEQUENCIA��O--------------\n\n");
printf("1) Leia um n�mero inteiro e escreva seu sucessor e antecessor.\n2) Leia dois n�meros e escreva o dividendo, divisor, quociente e resto.\n");
printf("3) Calcule a d�vida do cheque especial ao ser quitada 6 meses depois a uma taxa de 5 de juros. O valor do empr�stimo dev   e ser informado.\n4) Dada a base e a altura de um ret�ngulo, calcule o per�metro, a �rea e a diagonal.\n");
printf("5) Dada o lado de um quadrado, calcule o per�metro, a �rea e a diagonal.\n6) Dado o raio de um c�rculo, calcule o per�metro e a �rea.\n");
printf("8) Dados dois catetos de um triangulo ret�ngulo, calcule a hipotenusa.\n");
printf("9) Dada a raz�o de uma PA e seu primeiro termo, calcular o 20� termo.\n10) Dada a raz�o de uma PG e seu primeiro termo, calcular o 20� termo\n");
printf("11) Dado um hor�rio, calcule quantos minutos e segundos transcorreram desde o in�cio do dia\n12) Dado o valor do sal�rio-m�nimo e um determinado sal�rio, calcule quantos sal�riosm�nimos est�o contidos nele.\n");
printf("\n------SELE��O-------\n\n");
printf("13) Dado um n�mero, informar se ele � divis�vel por 3 e por 6.\n14) Dada uma idade, informar se ela est� compreendida no intervalo de 10 a 18 anos.\n");
printf("15) Dada uma sigla de estado, informar o nome dado a quem nasce ali (p.ex. paulista,mineiro, ga�cho, carioca etc).\n16) Dadas 3 pontua��es de finalistas em um campeonato, informe qual a pontua��o que ficou em primeiro, segundo e terceiro lugar.\n");
printf("17) Dado um estado, informar de qual regi�o ele pertence.\n");
printf("\n------REPETI��O------\n\n");
printf("18) Imprima uma tabela de convers�o de polegadas para cent�metros, de 1 a 20. Considere que Polegada = Cent�metro * 2,54.\n19) Imprima uma PA, onde s�o fornecidos o primeiro termo, a raz�o e a quantidade de termos desejada.\n");
printf("20) Dado um limite inferior e superior, calcule a soma de todos os n�meros pares contidos nesse intervalo.\n21) A s�rie de RICCI difere da s�rie de FIBONACCI porque os dois primeiros termos podem ser definidos pelo usu�rio. Imprima os n primeiros termos da s�rie de RICCI.\n");
printf("22) A s�rie de FETUCCINE difere da s�rie de RICCI porque o termo de posi��o par � resultado da subtra��o dos dois anteri    ores. Os termos �mpares continuam sendo o resultado da soma dos dois elementos anteriores. Imprima os n primeiros te    rmos da s�rie de FETUCCINE.\n");
printf("23) Dado um limite inferior e superior, imprima todos os n�meros primos contidos nesse intervalo.\n24) Dado um n�mero, imprimir a tabuada multiplicativa deste.\n");
printf("\n ------ '0' para Sair --------\n\nopc��o:");

scanf("%d", &op);

switch(op)
{
	case 1:
	{
	um();

		break;
	}
	
	case 2:
	{
	dois();
	
		break;
	}
	
	case 3:
	{
		tres();
		break;
	}
	
	case 4:
	{
		quatro();
		break;
	}
	
	case 5:
	{
		cinco();
		break;
	}

	case 6:
	{
		seis();
		}	
		
	case 8:
	{
		oito();
		break;
	}	
	
	case 9:
	{
		nove();	
		break;
	}
	
	case 10:
	{
		dez();
		break;
	}
	
	case 11:
	{
		onze();
		break;
	}
	
	case 12:
	{
		doze();
		break;
	}
	
	case 13:
	{
		treze();
		break;
	}
	
	case 14:
	{	
		quatorze();
		break;
	}
	case 15:
	{
		quinze();
		break;
	}
	case 16:
	{
		dezesseis();
		break;
	}
	case 0:
	{
		
		break;
	}
	
	default:
	{
		printf("Digite uma op��o V�lida!\n");
		system("pause");
		break;
	} 
}

}while(op != 0);


return 0;}

void um (){
		system ("cls");
		int num, sucessor, antecessor; 
		
		printf("Digite um numero:");
		scanf("%d", &num);
		
		printf("Sucessor: %d\nAntecessor: %d\n", num + 1, num - 1);
	system("Pause");
}

void dois(){
	system("cls");
	
	int dividendo, divisor;
	float quociente, resto;
	
	printf("escreva o dividendo:");
	scanf("%d", &dividendo);
	
	printf("escreva o divisor:");
	scanf("%d", &divisor);
	
	quociente = dividendo/divisor;
	
	printf("quociente : %2.f\n", quociente);
	
	resto = dividendo % divisor;
	
	printf("resto : %2.f\n", resto);

system("pause");
}

void tres(){
system("cls");	

int emprestimo;
float mes[6], juros;

printf("Digite o valor do empr�stimo:");
scanf("%d", &emprestimo);


mes[1] = emprestimo + (emprestimo * 0.05);
mes[2] = mes[1] + (mes[1] * 0.05);
mes[3] = mes[2] + (mes[2] * 0.05);
mes[4] = mes[3] + (mes[3] * 0.05);
mes[5] = mes[4] + (mes[4] * 0.05);
mes[6] = mes[5] + (mes[5] * 0.05);

printf("Divida acumulada em 6 meses : %.2f\n", mes[6]);

system("pause");
}

void quatro(){
system("cls");	

int base, altura;
float diagonal;

printf("Digte a base do retangulo:");
scanf("%d", &base);
printf("Digite a altura do retangulo:");
scanf("%d", &altura);

printf("O per�metro �: %d\n", base*2 + altura*2);

printf("A �rea � : %d m\n", base*altura);

(diagonal)= (altura*altura + base*base);


diagonal = sqrt(pow(altura, 2) + pow(base,2));

printf("A diagonal �: %2.f\n", diagonal);

system("pause");
}

void cinco(){
system("cls");
	
	int lado, area;
	
	printf("Digite o lado do quadrado:");
	scanf("%d", &lado);
	
	printf("o perimetro �: %d\n", lado*4);
	
	area = pow(lado,4);
  	
	printf("A area � : %d m\n", area);
	
system("pause");
}

void seis(){
	system("cls");
	
	int raio;
	float area;
	
	printf("Digite o raio:");
	scanf("%d", &raio);
	
	printf("O perimetro �: %d\n", 2*3,14*raio);
	
	area = pow(raio,2) * 2.14;

	printf("A area � : %.2f\n", area);
		
system("pause");
}

void oito(){
	system("cls");
	
	int cop, cad;
	float hipotenusa;

	printf("Digite o cateto oposto:");
	scanf("%d", &cop);
	
	printf("Digite o cateto adjacente:");
	scanf("%d", &cad);
	
	hipotenusa = sqrt(pow(cop,2) + pow(cad,2));

	printf("A hipotenusa �: %.2f\n", hipotenusa);
	
system("pause");
}

void nove(){
	system("cls");
	
	int a1, q;

	printf("Digite o primeiro termo da p.a:");
	scanf("%d", &a1);
	
	printf("Digite a raz�o da p.a:");
	scanf("%d", &q);
	
	printf("o 20� termo da p.a �: %d\n", a1 + (20-1) * q);

system("pause");
}

void dez(){
	system("cls");
	
	int a1, q;
	float termo;
	
	printf("Digite o primeiro termo da p.g:");
	scanf("%d", &a1);
	
	printf("Digite a raz�o da p.g:");
	scanf("%d", &q);
	
	termo = pow(q,(20-1)) * a1;
	
	printf("o 20� termo da p.g � : %.2f\n", termo);
	
	
	system ("pause");
}

void onze (){
	system("cls");
	
	int hora, minutos;
	
	printf("Digite a hora atual (dois digitos):");
	scanf("%d", &hora);
	
	printf("Digite os minutos atuais (dois digitos):");
	scanf("%d", &minutos);
	
	if(hora != 00)
	{
	printf("Passaram-se %d minutos e %d segundos\n", hora*60, hora*60*60);
	}else
	{
	printf("Passaram-se %d minutos e %d segundos\n", 24*60, 24*60*60);
	}
	
	system("pause");
}

void doze(){
	system("cls");
	
	int salariomin, salario;
	
	printf("Digite o valor do sal�rio-minimo atual:");
	scanf("%d", &salariomin);
	
	printf("Digite seu sal�rio:");
	scanf("%d", &salario);
	
	printf("voc� ganha %d sal�rios m�nimos\n", salario/salariomin);
	
	system("pause");
}

void treze(){
	system("cls");
	
	int num;
	
	printf("Digite seu numero:");
	scanf("%d", &num);
	
	if(num%3 == 0){
		if(num%6 == 0){
			printf("O numero � divisivel por 3 e por 6!\n");
		}
	}else{
		printf("O numero n�o � divisivel por 3 e por 6\n");
	}
	
	system("pause");
}

void quatorze(){
	system("cls");
	
	int idade;
	
	printf("Digite a sua idade:");
	scanf("%d", &idade);
	
	if(idade > 10 && idade <= 18){
		printf("A idade esta compreendida entre 10 a 18 anos!\n");
	}else{
		printf("A idade n�o esta nos conformes.\n");
	}
	
	system("pause");
}

void quinze(){
	system("cls");
	
	char sigla[2];
	
	printf("Digite a Sigla do Estado:\n");
	scanf("%s", &sigla);
	
	if(strcmp(sigla,"pe") == 0){
		printf("pernambucano!\n");
	}
	if(strcmp(sigla,"pb") == 0){
		printf("paraibensse!\n");
	}
	if(strcmp(sigla,"sp") == 0){
		printf("paulista!\n");
	}
	if(strcmp(sigla,"mg") == 0){
		printf("mato grosseinse!\n");
	}
	if(strcmp(sigla,"ba") == 0){
		printf("baiano!\n");
	}
	if(strcmp(sigla,"ma") == 0){
		printf("manauseinsse\n");
	}

	
	system("pause");
}

void dezesseis(){
	system("cls");


	
system("pause");
}
