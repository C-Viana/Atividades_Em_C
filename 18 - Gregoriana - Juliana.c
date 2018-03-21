#include<stdio.h>
#include<stdlib.h>


int conversaoCalendario(int dia, int mes, int ano) {
	
	return (1461*(ano + 4800 + (mes - 14) / 12)) / 4+367*(mes - 2 - 12*((mes-14)/12)) /12-(3*((ano + 4900 + (mes-14)/12)/100)) / 4+dia-32075;
}


void main(){
	
	int dia;
	printf("\nInforme o dia que deseja converter: "); scanf("%i", &dia);
	
	int mes;
	printf("\nInforme o mes referente a este dia: "); scanf("%i", &mes);
	
	int ano;
	printf("\nInforme o ano referente a este dia: "); scanf("%i", &ano);
	
	printf("\n\nO dia %i/%i/%i no calendario Juliano e %i.\n\n", dia, mes, ano, conversaoCalendario(dia, mes, ano));
	
}