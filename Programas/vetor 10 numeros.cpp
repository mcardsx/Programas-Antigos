#include <stdio.h>
#include <stdlib.h>

int main () {
	float num [10];
	int idx; 
	float quantidade=10;
	
	
	for(idx=0; idx<quantidade; idx++){
		printf("digite o %i numero \n", idx+1);
		scanf("%f", &num[idx]);
	}
	
	for(idx=quantidade-1; idx>=0; idx--){
		
		printf("%.f \n", num[idx]);
	
	}
	
return 0;}
