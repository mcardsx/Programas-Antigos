#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale(LC_ALL,"");	

	FILE *file;
	file = fopen("D:string.txt", "w");
	fprintf(file,"XESQUEDELE\n MECTRAB\n T� EM CHOQUE? \n TEM DUAS PINK NO MESMO LUGAR");
	fclose(file);


return 0;}
