#include<stdio.h>
#include<stdlib.h>


void desafio1(int num){
	
	for(int i=1; i<11; i++)
		printf("%i X %i = %i\n", num, i, num*i);
	
	printf("\n");
}

void desafio2(int num, int mult){
	
	for(int i=1; i<mult+1; i++)
		printf("%i X %i = %i\n", num, i, num*i);
	
	printf("\n");
}


void main(){
	int num;
	printf("\nIndique com numeros qual a tabuada desejada: "); scanf("%i", &num);
	printf("\n");
	
	desafio1(num);
	
	printf("\nIndique outro numero para outra tabuada: "); scanf("%i", &num);
	int mult;
	printf("\E quantas multiplicaxoes voce deseja: "); scanf("%i", &mult);
	printf("\n");
	
	desafio2(num, mult);
}