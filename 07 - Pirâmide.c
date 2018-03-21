#include<stdio.h>
#include<stdlib.h>



void desenhaPiramide(){
	int controle = 1, tamanho;
	printf("\n");
	printf("Qual deve ser o tamanho desta piramide? "); scanf("%i", &tamanho);
	printf("\n");
	
	for(int i=0; i<tamanho; i++){
		for(int j=0; j<controle; j++){
			printf("*");
		}
		controle++;
		printf("\n");
	}
	
	controle = tamanho;
	
	for(int i=0; i<tamanho; i++){
		for(int j=0; j<controle; j++){
			printf("*");
		}
		controle--;
		printf("\n");
	}
	
	
	printf("\n\n");
}


void main(){
	desenhaPiramide();
	
}