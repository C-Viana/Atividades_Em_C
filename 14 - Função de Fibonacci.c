#include<stdio.h>
#include<stdlib.h>


void fibonacci(int limite) {
	
	int a = 1 , b = 1, c = 0;
	
	for(int i=0; i<limite; i++){
		c = a+b;
		
		printf("Soma %i: %i + %i = %i\n", i+1, a, b, c);
		
		a = b;
		b = c;
		
	}
	
}


void main(){
	
	int limite;
	printf("Informe um limite para a sequencia de Fibonacci: "); scanf("%i", &limite);
	
	fibonacci(limite);
}