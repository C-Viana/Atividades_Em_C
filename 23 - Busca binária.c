
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAMANHO 20

int buscaBinaria(int vetor[], int num){

    int inicio = 0;
    int fim = TAMANHO;
    int meio = fim/2;
    int pronto = 0;

    while(pronto == 0 && (num > vetor[0] && num < vetor[TAMANHO-1])){

        if(num < vetor[meio]){
            fim = meio;
            meio = (inicio+fim)/2;
        }
        else if(num > vetor[meio]){
            inicio = meio;
            meio = (inicio+fim)/2;
        }
        else if(num == vetor[meio]){
            pronto = 1;
        }
    }

    if(num < vetor[0] || num > vetor[TAMANHO-1]){
        meio = -1;
    }

    return meio;
}


void main(){
    setlocale(LC_ALL, "Portuguese");

    int aux = 0;
    int num = 0;
    int vetor[] = {9,8,6,1,3,4,5,2,7,0,11,15,16,19,20,12,17,13,14,18};

    //ORDENA��O DO VETOR
    for(int i=0; i<TAMANHO; i++){
        for(int j=0; j<TAMANHO-1; j++){
            if(vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    //IMPRESS�O DO VETOR
    for(int i=0; i<TAMANHO; i++){
        printf("Posi��o: %i = %i\n", i, vetor[i]);
    }


    printf("\n\nDigite um n�mero para realizar a busca: "); scanf("%i", &num);
    int indice = buscaBinaria(vetor, num);

    (indice < 0) ? printf("Este n�mero n�o est� no �ndice") : printf("O n�mero %i est� na posi��o %i do vetor.", num, indice);

    printf("\n\n");
}
