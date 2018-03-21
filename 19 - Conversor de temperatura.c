#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){
	
	setlocale(LC_ALL, "pt_BR");
	
	float celsius = 0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    printf("\nA temperatura de %0.2f Celsius em Fahrenheit e: %0.2f", celsius, (9.0/5.0) * celsius+32.0);
	printf("\nA temperatura de %0.2f Celsius em Kelvin e: %0.2f\n\n", celsius, celsius+273.15);
	
}