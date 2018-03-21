
#include<stdlib.h>
#include<stdio.h>


void somaLinhas(int m[][4], int t){
	
	int soma = 0;
	
	for(int i=0; i<t; i++){
		for(int j=0; j<t; j++){
			soma += m[i][j];
		}
		printf("Soma da linha %i = %i\n", i+1, soma);
		soma = 0;
	}
	printf("\n");
}

void somaColunas(int m[][4], int t){
	
	int soma = 0;
	
	for(int i=0; i<t; i++){
		for(int j=0; j<t; j++){
			soma += m[j][i];
		}
		printf("Soma da coluna %i = %i\n", i+1, soma);
		soma = 0;
	}
	printf("\n");
}

void somaDiagonaiD(int m[][4], int t){
	
	int soma = 0;
	
	for(int i=0; i<t; i++){
		soma += m[i][i];
	}
	printf("Soma da diagonal direita = %i\n", soma);
	printf("\n");
}


void somaDiagonaiE(int m[][4], int t){
	
	int soma = 0;
	int controle = t-1;
	
	for(int i=0; i<t; i++){
		soma += m[i][controle];
		controle--;
	}
	printf("Soma da diagonal esquerda = %i\n", soma);
	printf("\n");
}



void main(){
	
	int mat[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,0,1,2}, {3,4,5,6}};
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			
			printf("%i\t", mat[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	
	somaLinhas(mat, 4);
	somaColunas(mat, 4);
	somaDiagonaiD(mat, 4);
	somaDiagonaiE(mat, 4);
}