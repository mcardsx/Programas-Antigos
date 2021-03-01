#include <stdio.h>
#include <stdlib.h>

int main(){

int diasmeta, i, tlivre[diasmeta];
int naudios, maudios[naudios], somaaudios=0, haudios;

printf("quantos dias voce tem ate sua meta?\n");
	scanf("%d", &diasmeta);
fflush(stdin);

	for(i=1;i<=diasmeta;i++){
		printf("quantas horas livres voce tem no %d dia?\n", i);
		scanf("%d", &tlivre[i]);
	fflush(stdin);
	}
		for(i=1;i<=diasmeta;i++){
				printf("suas horas livres no %d dia sao: \n %d horas\n", i, tlivre[i]);	
		}

printf("quantos audios voce tem?\n");
	scanf("%d", &naudios);
	
		for(i=1;i<=naudios;i++){
			printf("quantos minutos voce tem no %d audio?\n", i);
			scanf("%d",&maudios[i]);
		fflush(stdin);	
		}	
			for(i=1;i<=naudios;i++){
				printf("Os minutos no %d audio sao: \n %d minutos\n", i, maudios[i]);
				
					 somaaudios += maudios[i];
			}
		

	printf("a soma dos audios eh: %d\n", somaaudios);

haudios = somaaudios/60;

printf("\nvoce tem %d horas de audio para estudar\n", haudios);

return 0;}
