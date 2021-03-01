#include <stdio.h>
#include <stdlib.h>
//Fazer um algoritmo que leia os valores de um vetor inteiro de tamanho 10, e imprima o valor da soma dos números ímpares presentes neste vetor.

int main () {
	
	int vetor[10];
	int idx;
	float soma = 0;
	

for(idx=0; idx<10; idx++){
	printf("insira o %d numero \n", idx+1);
	scanf("%d", &vetor[idx]);
	
	if(vetor[idx]%2!=0){
	
	soma += vetor[idx];
	//soma = soma + vetor[idx];
	}
}

printf("\n a soma dos numeros impares: %.f \n", soma);
	
return 0;}
