#include <stdio.h>
#include <stdlib.h>

int main () {
	int x;
	int y;
	int idx;

printf("insira o valor de x \n");	
scanf("%i", &x);
	int multiplos[x]; 	
printf("insira o valor de y \n");
scanf("%i", &y);

for(idx=0; idx<x; idx++){

multiplos[idx]= (idx+1)*y; 		
}

for(idx=0; idx<x; idx++){
	printf("%i \n", multiplos[idx]);
}
	
return 0;}
