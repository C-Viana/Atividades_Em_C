

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define LINHAS 3
#define COLUNAS 3

int imprime(int matriz[][COLUNAS], int qtd){
    for(int i=0; i<qtd; i++){
        for(int j=0; j<COLUNAS; j++){
            printf(" %i\t", matriz[i][j]);
        }
        printf("\n");
    }
}


char jogar(int matriz[][COLUNAS], char player){
    int l;
    int c;

    if(player == 'X' || player == 'x'){
        printf("vez Jogador 'X': ");
        printf("\nEscolha a posição linha: "); scanf("%i", &l);
        printf("\nEscolha a posição coluna: "); scanf("%i", &c);
        matriz[l][c] = 1;
    }
    else{
        printf("\n\nvez Jogador 'O': ");
        printf("\nEscolha a posição linha: "); scanf("%i", &l);
        printf("\nEscolha a posição coluna: "); scanf("%i", &c);
        matriz[l][c] = 0;
    }

    return player;

}

int velha(int matriz[][COLUNAS], int qtd){

    for(int i=0; i<qtd; i++){
        if(matriz[i][0] == 1 && matriz[i][1] == 1 && matriz[i][2] == 1)
            return 1;
        else if(matriz[i][0] == 0 && matriz[i][1] == 0 && matriz[i][2] == 0)
            return 1;
        else if(matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1)
            return 1;
        else if(matriz[0][0] == 0 && matriz[1][1] == 0 && matriz[2][2] == 0)
            return 1;
        else if(matriz[0][2] == 1 && matriz[1][1] == 1 && matriz[2][0] == 1)
            return 1;
        else if(matriz[0][2] == 0 && matriz[1][1] == 0 && matriz[2][0] == 0)
            return 1;
        else
            return 0;
    }

}


void main(){
    setlocale(LC_ALL, "Portuguese");

    int vitoria = 0;
    char player = 'X';
    int matriz[LINHAS][COLUNAS] = {{3,3,3},{3,3,3},{3,3,3}};
    imprime(matriz, LINHAS);

    while(vitoria == 0){
        printf("\n");
        if(player == 'X' || player == 'x'){
            player = jogar(matriz, player);
            vitoria = velha(matriz, LINHAS);
            player = 'O';
        }
        else if(player == 'O' || player == 'o'){
            player = jogar(matriz, player);
            vitoria = velha(matriz, LINHAS);
            player = 'X';
        }
        imprime(matriz, LINHAS);
    }

    printf("\n\nJogo terminado!\n\n");

}
