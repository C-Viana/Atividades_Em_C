#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main(){
	
	setlocale(LC_ALL, "pt_BR");
	
	srand((unsigned int) time(NULL));
	
	int carta = 0;
	int pontos = 0;
	int sinal = 0;
	
	
	
	while(sinal == 0){
		carta = rand() % 11;
		pontos += carta;
		printf("\nVoce tirou uma carta de valor %i.\n", carta);
		
		if(pontos<=10){
			printf("\n\nCONSELHEIRO: Sem duvida compre mais uma carta.\n");
			printf("Tecle '1' para sair ou '0' para continuar: ");
			scanf("%i", &sinal);
			continue;
		}
		else if(pontos > 10 & pontos <= 15){
			printf("\n\nCONSELHEIRO: Ha um risco, mas aconselho a comprar mais uma carta.\n");
			printf("Tecle '1' para sair ou '0' para continuar: ");
			scanf("%i", &sinal);
			continue;
		}
		else if(pontos > 15 & pontos <= 20){
			printf("\n\nCONSELHEIRO: Aconselho a parar de jogar.\n");
			printf("Tecle '1' para sair ou '0' para continuar: ");
			scanf("%i", &sinal);
			continue;
		}
		else if(pontos == 21){
			printf("\n\nCONSELHEIRO: Voce ja venceu! Não precisa comprar mais nada.");
			break;
		}
		else if(pontos>21)
			printf("\n\nCONSELHEIRO: Voce perdeu.");
			break;
	}
	
	printf("\n\nSua pontuacao foi: %i.\n\n", pontos);
	
    
	
}