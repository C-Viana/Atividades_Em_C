#include<stdio.h>
#include<stdlib.h>


int fatorialRecursivo(int num){
	
	if(num < 2)
		return;
	
	
	return num*fatorialRecursivo(num-1);
	
}


void main(){
	
	int num;
	printf("Informe um numero para calcular seu fatorial: "); scanf("%i", &num);
	
	printf("%i", fatorialRecursivo(num));
}