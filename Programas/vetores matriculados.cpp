#include <stdio.h>
#include <stdlib.h>

int main () {

	int matriculados [10];
	int idx;
	int matricula;
	int aux = 0;
		
for(idx=0; idx<10; idx++) {
	
	printf("insira o %d matriculado: \n", idx+1);
	scanf("%d", &matriculados[idx]);
	
}

printf("\n insira uma matricula \n");
scanf("%d", &matricula);

for(idx=0; idx<10; idx++) {
	
	if(matricula==matriculados[idx]) {
		
		printf("%d", matriculados[idx]);	
		aux=1;
	}
}

if(aux==1) {
	
	printf("seu filho nao esta nessse colegio");

}

		


return 0;}
