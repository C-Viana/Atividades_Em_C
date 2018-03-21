#include<stdio.h>
#include<stdlib.h>

void arvoreNatal(){
	
	printf("\n\n");
	int controle = 10;
	
	for(int i=0; i<controle; i++){
		for(int k=0; k<controle-i; k++)
			printf(" ");
		printf("/");
		for(int j=0; j<i*2; j++){
			printf("*");
		}
		printf("\\");
		printf("\n");
	}
	
	for(int i=0; i<3; i++){
		for(int k=0; k<controle; k++)
			printf(" ");
		printf("||\n");
	}
	
	printf("\n\n");
	
}

void main(){
	arvoreNatal();
}