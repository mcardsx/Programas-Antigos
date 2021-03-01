#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float idade;
	float meses;
	char resposta;
	

	
printf("qual a sua idade?\n");
scanf("%f", &idade);

	if(idade>=18 && idade<=64) {
	printf("voce tem tatuagem?\n digite 's' para sim e 'n' para nao\n");
	fflush(stdin);
	scanf("%c", &resposta);
		if(resposta == 's'){ 
	
			printf("a quantos meses?\n");
			scanf("%f", &meses);
				if(meses> 12) {
					printf("voce pode doar sangue!\n");	
				}
				else{ printf("voce nao pode doar sangue!\n");
				}
	    }
	    else{ printf("voce pode doar sangue!\n");
		}
	
	}
	
	else{ printf("voce nao pode doar sangue");
	}

return 0;}
