
#include<stdlib.h>
#include<stdio.h>


void ordenacao(int m[], int q){
	
	int auxiliar = 0;
	
	
	for(int j=0; j<q; j++){
		for(int i=0; i<q-1; i++){
			if(m[i] > m[i+1]){
				auxiliar = m[i];
				m[i] = m[i+1];
				m[i+1] = auxiliar;
			}
		}
	}
	
	printf("\n\nVetor depois da ordenacao: ");
	for(int i=0; i<10; i++){
		printf("%i ", m[i]);
	}
	
}








void main(){
	srand((unsigned int)time(NULL));
	
	int vet[10];
	
	for(int i=0; i<10; i++){
		vet[i] = rand()%100;
	}
	
	printf("\n\nVetor antes da ordenacao: ");
	for(int i=0; i<10; i++){
		printf("%i ", vet[i]);
	}
	
	
	
	
	
	ordenacao(vet, 10);
	
	
	
	
	
	
	printf("\n\n");
	
}