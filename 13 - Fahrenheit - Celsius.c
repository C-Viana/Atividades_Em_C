#include<stdio.h>
#include<stdlib.h>


float fahrenheitCelsius(float fahrenheit){
	return (fahrenheit - 32.0) / (9.0/5.0);
}


void main(){
	
	float fahrenheit = 0;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("\nA temperatura de %0.2f Fahrenheit em Celsius e: %0.2f\n\n", fahrenheit, fahrenheitCelsius(fahrenheit));
	
}