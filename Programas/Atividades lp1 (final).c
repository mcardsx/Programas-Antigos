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

printf("------SOLUÇÕES------\n\n");
printf("Escolha uma Questão:\n\n");
printf("----------SEQUENCIAÇÃO--------------\n\n");
printf("1) Leia um número inteiro e escreva seu sucessor e antecessor.\n2) Leia dois números e escreva o dividendo, divisor, quociente e resto.\n");
printf("3) Calcule a dívida do cheque especial ao ser quitada 6 meses depois a uma taxa de 5 de juros. O valor do empréstimo dev   e ser informado.\n4) Dada a base e a altura de um retângulo, calcule o perímetro, a área e a diagonal.\n");
printf("5) Dada o lado de um quadrado, calcule o perímetro, a área e a diagonal.\n6) Dado o raio de um círculo, calcule o perímetro e a área.\n");
printf("8) Dados dois catetos de um triangulo retângulo, calcule a hipotenusa.\n");
printf("9) Dada a razão de uma PA e seu primeiro termo, calcular o 20º termo.\n10) Dada a razão de uma PG e seu primeiro termo, calcular o 20º termo\n");
printf("11) Dado um horário, calcule quantos minutos e segundos transcorreram desde o início do dia\n12) Dado o valor do salário-mínimo e um determinado salário, calcule quantos saláriosmínimos estão contidos nele.\n");
printf("\n------SELEÇÂO-------\n\n");
printf("13) Dado um número, informar se ele é divisível por 3 e por 6.\n14) Dada uma idade, informar se ela está compreendida no intervalo de 10 a 18 anos.\n");
printf("15) Dada uma sigla de estado, informar o nome dado a quem nasce ali (p.ex. paulista,mineiro, gaúcho, carioca etc).\n16) Dadas 3 pontuações de finalistas em um campeonato, informe qual a pontuação que ficou em primeiro, segundo e terceiro lugar.\n");
printf("17) Dado um estado, informar de qual região ele pertence.\n");
printf("\n------REPETIÇÂO------\n\n");
printf("18) Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere que Polegada = Centímetro * 2,54.\n19) Imprima uma PA, onde são fornecidos o primeiro termo, a razão e a quantidade de termos desejada.\n");
printf("20) Dado um limite inferior e superior, calcule a soma de todos os números pares contidos nesse intervalo.\n21) A série de RICCI difere da série de FIBONACCI porque os dois primeiros termos podem ser definidos pelo usuário. Imprima os n primeiros termos da série de RICCI.\n");
printf("22) A série de FETUCCINE difere da série de RICCI porque o termo de posição par é resultado da subtração dos dois anteri    ores. Os termos ímpares continuam sendo o resultado da soma dos dois elementos anteriores. Imprima os n primeiros te    rmos da série de FETUCCINE.\n");
printf("23) Dado um limite inferior e superior, imprima todos os números primos contidos nesse intervalo.\n24) Dado um número, imprimir a tabuada multiplicativa deste.\n");
printf("\n ------ '0' para Sair --------\n\nopcção:");

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
		printf("Digite uma opção Válida!\n");
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

printf("Digite o valor do empréstimo:");
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

printf("O perímetro é: %d\n", base*2 + altura*2);

printf("A área é : %d m\n", base*altura);

(diagonal)= (altura*altura + base*base);


diagonal = sqrt(pow(altura, 2) + pow(base,2));

printf("A diagonal é: %2.f\n", diagonal);

system("pause");
}

void cinco(){
system("cls");
	
	int lado, area;
	
	printf("Digite o lado do quadrado:");
	scanf("%d", &lado);
	
	printf("o perimetro é: %d\n", lado*4);
	
	area = pow(lado,4);
  	
	printf("A area é : %d m\n", area);
	
system("pause");
}

void seis(){
	system("cls");
	
	int raio;
	float area;
	
	printf("Digite o raio:");
	scanf("%d", &raio);
	
	printf("O perimetro é: %d\n", 2*3,14*raio);
	
	area = pow(raio,2) * 2.14;

	printf("A area é : %.2f\n", area);
		
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

	printf("A hipotenusa é: %.2f\n", hipotenusa);
	
system("pause");
}

void nove(){
	system("cls");
	
	int a1, q;

	printf("Digite o primeiro termo da p.a:");
	scanf("%d", &a1);
	
	printf("Digite a razão da p.a:");
	scanf("%d", &q);
	
	printf("o 20º termo da p.a é: %d\n", a1 + (20-1) * q);

system("pause");
}

void dez(){
	system("cls");
	
	int a1, q;
	float termo;
	
	printf("Digite o primeiro termo da p.g:");
	scanf("%d", &a1);
	
	printf("Digite a razão da p.g:");
	scanf("%d", &q);
	
	termo = pow(q,(20-1)) * a1;
	
	printf("o 20º termo da p.g é : %.2f\n", termo);
	
	
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
	
	printf("Digite o valor do salário-minimo atual:");
	scanf("%d", &salariomin);
	
	printf("Digite seu salário:");
	scanf("%d", &salario);
	
	printf("você ganha %d salários mínimos\n", salario/salariomin);
	
	system("pause");
}

void treze(){
	system("cls");
	
	int num;
	
	printf("Digite seu numero:");
	scanf("%d", &num);
	
	if(num%3 == 0){
		if(num%6 == 0){
			printf("O numero é divisivel por 3 e por 6!\n");
		}
	}else{
		printf("O numero não é divisivel por 3 e por 6\n");
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
		printf("A idade não esta nos conformes.\n");
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
