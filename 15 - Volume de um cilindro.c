#include <stdlib.h>
#include <stdio.h>


float areaCilindro(float raio, float altura) {
    
    return (3.1415 * (raio*raio)) * altura;
    
	
}


void main(){
	
	float altura;
	printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
	
	float raio;
    printf("\nDigite o raio do cilindro: ");
    scanf("%f", &raio);
    
	
	
	printf("\nA area deste cilindro e: %0.2f\n\n", areaCilindro(raio, altura));
	
}

