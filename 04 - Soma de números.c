#include<locale.h>
#include<stdio.h>
#include<stdlib.h>



void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int a;
	printf("\nDigite um valor inteiro para o primeiro número: ");
	scanf("%i", &a);
	
	int b;
	printf("\nDigite um valor inteiro para o segundo número: ");
	scanf("%i", &b);
	
	printf("\nO resultado da soma de %i e %i é igual a %i.\n\n", a, b, a+b);
	
}