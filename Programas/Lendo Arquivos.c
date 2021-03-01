#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	FILE *file;
	file = fopen("string.txt", "r");
		
		if(file == NULL){
			printf("o arquivo não existe e não pode ser aberto\n");
				
		return 0;}
		
		char frase[100];
	
	while(fgets(frase,100,file) != NULL){
		
		printf("%s", frase);
	}
	
	fclose(file);
	
return 0;}
