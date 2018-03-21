#include<stdio.h>
#include<stdlib.h>


int bissexto(int ano){
	
	if(ano%4 == 0 & ano%100 != 0 | ano%400 == 0)
		return 1;
	else
		return 0;
	
}


void main(){
	
	int ano;
	printf("Informe um ano para verificar se ele e (ou foi) bissexto: "); scanf("%i", &ano);
	
	if(bissexto(ano) == 1)
		printf("O ano %i e/foi bissexto.\n\n", ano);
	else
		printf("O ano %i nao e/foi bissexto.\n\n", ano);
}