#include<stdio.h>
#include<stdlib.h>


void desafio1(){
	int controle = 1;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<controle; j++){
			printf("*");
		}
		controle++;
		printf("\n");
	}
	printf("\n\n");
}

void desafio2(){
	int controle = 1, tamanho;
	
	printf("Qual deve ser o tamanho deste triangulo? "); scanf("%i", &tamanho);
	
	for(int i=0; i<tamanho; i++){
		for(int j=0; j<controle; j++){
			printf("*");
		}
		controle++;
		printf("\n");
	}
	printf("\n\n");
}


void main(){
	desafio1();
	desafio2();
	
}