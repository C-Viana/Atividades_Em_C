#include<stdio.h>
#include<stdlib.h>


float celsiusFahrenheit(float celsius){

    return (9.0/5.0) * celsius+32.0;
}


void main(){
	
	float celsius = 0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    printf("\nA temperatura de %0.2f Celsius em Fahrenheit e: %0.2f\n\n", celsius, celsiusFahrenheit(celsius));
	
}