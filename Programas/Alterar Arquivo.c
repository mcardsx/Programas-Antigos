#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");	

	FILE *file;
	file = fopen("string.txt", "a");
	
	if(file == NULL){
		printf("o arquivo nao existe e nao pode ser aberto");
		
	return 0;}
	
	fprintf(file, "NA TESTE\n");
	
	
	char frase [] = "PEGA A SEJUANE SHRIMP\n";
		fputs(frase, file);
	
	char caractere = '3';
		fputc(caractere, file);
	
	fclose(file);

return 0;}
