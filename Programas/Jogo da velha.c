#include <stdio.h>
#include <stdlib.h>

void tabuleiro(char casas2 [3][3]){

	system("cls");

	printf("\t %c | %c | %c\n", casas2[0][0], casas2[0][1], casas2[0][2]);
	printf("\t------------\n");
	printf("\t %c | %c | %c\n", casas2[1][0], casas2[1][1], casas2[1][2]);
	printf("\t------------\n");
	printf("\t %c | %c | %c\n", casas2[2][0], casas2[2][1], casas2[2][2]);
	
}

int main (){
	char casas [3][3] = { {'1','2','3'},
						  {'4','5','6'},
						  {'7','8','9'}, };			   
	
	
	
	char res;
	int contjogadas, l, c, vez = 0, i, j;
	
	do{
		contjogadas = 1;
		
		for(i=0; i<=2; i++){
			for(j=0; j<=2; j++){
				casas[i][j] = ' ';
			}
		}
		do{
			tabuleiro(casas);
			
			if(vez%2 == 0){
				printf("Jogador X\n");
			}else{
				printf("Jogador O\n");
			}
			
			printf("Digite a linha: ");
				scanf("%i", &l);
			printf("Digite a Coluna: ");
				scanf("%i", &c);
			
			if(l<1 || c<1 || l>3 || c>3){
				l = 0;
				c = 0;
			
			}else if(casas [l-1][c-1] != ' '){
				l = 0;
				c = 0;
			}else{
				if(vez%2 == 0){
					casas [l-1][c-1] = 'X';
				}else{
					casas [l-1][c-1] = 'O';
				}
				vez++;
				contjogadas++;
			}
			
	for(i=0;i<=2;i++){
		
		if(casas[i][0]=='X' && casas[i][1]=='X' && casas[i][2]=='X'){contjogadas = 11;}
	}
	
	for(i=0;i<=2;i++){
		
		if(casas[0][i]=='X' && casas[1][i]=='X' && casas[2][i]=='X'){contjogadas = 11;}
	}
	
	if(casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2]=='X'){contjogadas = 11;}
	
	if(casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0]=='X'){contjogadas = 11;}	
			
			
	for(i=0;i<=2;i++){
		
		if(casas[i][0]=='O' && casas[i][1]=='O' && casas[i][2]=='O'){contjogadas = 12;}
	}
	
	for(i=0;i<=2;i++){
		
		if(casas[0][i]=='O' && casas[1][i]=='O' && casas[2][i]=='O'){contjogadas = 12;}
	}
	
	if(casas[0][0]=='O' && casas[1][1]=='O' && casas[2][2]=='O'){contjogadas = 12;}
	
	if(casas[0][2]=='O' && casas[1][1]=='O' && casas[2][0]=='O'){contjogadas = 12;}			
		
		
		}while(contjogadas <= 9);
	
		tabuleiro(casas);
		
		if(contjogadas == 10){
			printf("\nJogo Empatado!\n");
		}
		if(contjogadas == 11){
			printf("\nJogador X Venceu!\n");
		}
		if(contjogadas == 12){
			printf("\nJogador O Venceu!\n");
		}
		
		printf("\ndeseja jogar novamente?[s-n]\n");
		scanf("%s", &res);
		
	}while(res == 's');						  

return 0;}
