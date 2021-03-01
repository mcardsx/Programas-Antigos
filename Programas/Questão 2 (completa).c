#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){

	setlocale(LC_ALL, "portuguese");
	
	int i, j, matriz[5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	

printf("qual cadeira da sala você quer ocupar? (informe com linha e coluna)\n");
	scanf("%d %d", &i, &j);

if(i==999 || j==999){
	matriz[0][0]=-1;
	matriz[1][1]=-1;
	matriz[2][2]=-1;
	matriz[3][3]=-1;
	matriz[4][4]=-1;
	matriz[5][5]=-1;
}
// asumo '1' para um valor valido!
else(matriz[i][j]=1);
	



for(i=0;i<5;i++){

	for(j=0;j<5;j++){
		
		printf("%d", matriz[i][j]);
			
	}
	printf("\n");
}
return 0;}
