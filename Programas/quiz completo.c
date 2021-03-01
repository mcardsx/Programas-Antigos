#include <stdio.h>
#include <stdlib.h>
int pergunta1(), pergunta2(), pergunta3(), pergunta4(), pergunta5();

void ordenacao(int vetor[], int tamanho);

int main(){
	int tamanho = 3;
	int idx, soma = 0, usuario[tamanho];
	
	for(idx=0; idx<tamanho; idx++){
		soma +=	pergunta1();
		soma +=	pergunta2();	
		soma +=	pergunta3();
		soma +=	pergunta4();
		soma +=	pergunta5();
		
		printf("\n \n --------------- sua pontuacao foi: %d ----------------- \n \n", soma);
			usuario[idx] = soma;
		
		soma = 0;
	}
    
	
	
	ordenacao(usuario, tamanho);


return 0;
}

int pergunta1(){
	fflush(stdin);
	char resposta1;
	
	printf("1) Quem foi o campeao brasileiro de 98? \n \na)flamengo \nb)vasco \nc)corinthias \nd)palmeiras nao tem mundial \n");
	scanf("%c", &resposta1);
	
	if(resposta1 == 'c'){
	    printf("Parabens! voce ganhou 10 pontos!");
	    return 10;
	}else{
	  printf("voce errou e nao pontuou :( ");
	  return 0;
	}
	
}

int pergunta2(){
	fflush(stdin);
// Qual o maior campeao da Europa League?
	char resposta2;
	printf("\n \n2) Qual o maior campeao da Europa League?\n \na)PSG \nb)Chelsea \nc)Arsenal \nd)Servilla \n");
		scanf("%c", &resposta2);

if(resposta2 == 'd'){
	printf("Parabens! voce ganhou 10 pontos!");
return 10;}
	
else{
	printf("voce errou e nao pontuou :( ");
return 0;}
}

int pergunta3(){
	//quem é o maior artilheiro da Champions league?

fflush(stdin);
	char resposta3;
	printf("\n \n3) Quem foi o maior artilheiro da champions league? \n \na)Messi \nb)Cr7 \nc)Raul \nd)Ronaldinho \n");
		scanf("%c", &resposta3);

if(resposta3 == 'b'){
	printf("Parabens! voce ganhou 10 pontos!");
return 10;}
else{
	printf("voce errou e nao pontuou :( ");
return 0;}
}

int pergunta4(){
	//qual nome do mascote do Brasil em 2018?

fflush(stdin); 
		char resposta4;
	printf("\n \n4) Qual foi nome do mascote do Brasil na copa de 2018? \n \na)Canarinho \nb)Fuleco \nc)Passarinho \nd)Striker \n");
		scanf("%c", &resposta4);

if(resposta4 == 'a'){
	printf("Parabens! voce ganhou 10 pontos!");
return 10;}
else{
	printf("voce errou e nao pontuou :( ");
return 0;}
}

int pergunta5(){

	//qual dos times abaixo tem o maior numero de titulos da champions?

fflush(stdin); 
		char resposta5;
	printf("\n \n5) Qual dos times abaixo tem o maior numero de titulos da champions? \n \na)Barcelona \nb)Liverpool \nc)Ajax \nd)Milan \n");
		scanf("%c", &resposta5);

if(resposta5 == 'd'){
	printf("Parabens! voce ganhou 10 pontos!");
return 10;}
else{
	printf("voce errou e nao pontuou :( ");
return 0;}

}

void ordenacao(int vetor[], int tamanho){
	int idx1, idx2, aux;
	
	for(idx1=0; idx1<tamanho; idx1++){
		
		for(idx2=idx1+1; idx2<tamanho; idx2++){
			if(vetor[idx2] > vetor[idx1]){
				aux= vetor[idx2];
				vetor[idx2]=vetor[idx1];
				vetor[idx1]=aux;
			}
		}
	}
	
	for(idx1=0; idx1<tamanho; idx1++){
		printf(" %d lugar: pontuou %d pontos.\n", idx1+1, vetor[idx1]);
	}
	
	
	
	
}
