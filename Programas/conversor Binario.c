#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//int 0x64 para converter p hexadecimal    016 p base octal
void convbinario();
void convdecimal();

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	int escolha;
	int numero;
	int base;
	
	printf("Escolha a opção de conversão: (1) para converter de decimal para binario  (2) para converter de binario para decimal\n");
	scanf("%i", &escolha);
	
	switch(escolha){
		case 1:{
			printf("Você escolheu a opção numero (1)\n");
			convbinario();
			break;
		}
		
		case 2:{
			printf("Você escolheu a opção de numero (2)");
			convdecimal();
			break;
		}
	}
	
	
return 0;}

void convbinario(){
	
	int Numero;
	int bin[] = {0,0,0,0,0,0,0,0};
	int idx;
	
	printf("\nInsira o Numero que vc quer converter:\n");
	scanf("%i", &Numero);
	
	for(idx = 0; Numero!=0; idx++){
		bin[idx] = Numero % 2;
		Numero = (Numero - (Numero % 2))/ 2;
		printf("%d\n", Numero);
	}
	
	for(idx = 7; idx >= 0; idx--){
		printf("%d", bin[idx]);
	}
	
}

void convdecimal(){
	
	int valor, sobra; 
	int novoValor = 0;
	int posbin;
	printf("Insira o Valor em binario para conversão:\n");
	scanf("%i", &valor);
 
	for (posbin = 0; posbin <= 7; posbin++) {
		sobra = valor - ((valor / 10)*10);
		printf("%i \n", sobra);
		valor = valor / 10;
		novoValor += sobra * pow(2,posbin);
	}
	printf("O valor inserido em Decimal fica: %i \n", novoValor);
}

