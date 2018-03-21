#include<stdio.h>
#include<stdlib.h>



void main(){
	
	printf("\n\n");
	
	int num;
	printf("Indique um numero inteiro para calcular o fatorial: "); scanf("%i", &num);
	
	int fatorial = num;
	while(num>1){
		num--;
		fatorial *= num;
	}
	
	printf("Fatorial do numero indicado e %i", fatorial);
	
	printf("\n\n");
}