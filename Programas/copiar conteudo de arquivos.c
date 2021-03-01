#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	void copiarConteudo(FILE *file1, FILE *file2);		

	FILE *file1 = fopen("string.txt", "r");
	
	if(file1 == NULL){
		
		printf(" o arquivo não existe, não foi possivel abrir o aqruivo");
	return 0;}

	FILE *file2 = fopen("string2.txt", "w");
	
	copiarConteudo(file1, file2);	
	
	fclose(file1);
	fclose(file2);
	
	
return 0;}

void copiarConteudo(FILE *file1, FILE *file2){
	char leitor[100];
	
	while(fgets(leitor,100,file1) != NULL){
			fputs(leitor, file2);
	}
	

}
