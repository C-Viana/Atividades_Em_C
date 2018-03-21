#include<stdio.h>
#include<stdlib.h>


void desafio1(){
	for(int i=0; i<4; i++){
		for(int j=0; j<10; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
}


void desafio2(){
	int altura, base;
	
	printf("Informe a altura para o retangulo: "); scanf("%i", &altura);
	printf("Informe a base para o retangulo: "); scanf("%i", &base);
	
	for(int i=0; i<altura; i++){
		for(int j=0; j<base; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
}




void main(){
	
	desafio1();
	desafio2();
	
}