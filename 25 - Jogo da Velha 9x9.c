

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define LINHAS 9
#define COLUNAS 9

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
        if(matriz[i][0] == 1 && matriz[i][1] == 1 && matriz[i][2] == 1 && matriz[i][3] == 1 && matriz[i][4] == 1 && matriz[i][5] == 1 && matriz[i][6] == 1 && matriz[i][7] == 1 && matriz[i][8] == 1)
            return 1;
        else if(matriz[i][0] == 0 && matriz[i][1] == 0 && matriz[i][2] == 0 && matriz[i][3] == 0 && matriz[i][4] == 0 && matriz[i][5] == 0 && matriz[i][6] == 0 && matriz[i][7] == 0 && matriz[i][8] == 0)
            return 1;
        else if(matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1 && matriz[2][3] == 1 && matriz[2][4] == 1 && matriz[2][5] == 1 && matriz[2][6] == 1 && matriz[2][7] == 1 && matriz[2][8] == 1)
            return 1;
        else if(matriz[0][0] == 0 && matriz[1][1] == 0 && matriz[2][2] == 0 && matriz[3][3] == 0 && matriz[4][4] == 0 && matriz[5][5] == 0 && matriz[6][6] == 0 && matriz[7][7] == 0 && matriz[8][8] == 0)
            return 1;
        else if(matriz[0][8] == 1 && matriz[1][7] == 1 && matriz[2][6] == 1 && matriz[3][5] == 1 && matriz[4][4] == 1 && matriz[5][3] == 1 && matriz[6][2] == 1 && matriz[7][1] == 1 && matriz[8][0] == 1)
            return 1;
        else if(matriz[0][8] == 0 && matriz[1][7] == 0 && matriz[2][6] == 0 && matriz[3][5] == 0 && matriz[4][4] == 0 && matriz[5][3] == 0 && matriz[6][2] == 0 && matriz[7][1] == 0 && matriz[8][0] == 0)
            return 1;
        else
            return 0;
    }

}


void main(){
    setlocale(LC_ALL, "Portuguese");

     printf("\n\n");

    int vitoria = 0;
    char player = 'X';
    int matriz[LINHAS][COLUNAS];

    for(int i=0; i<LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            matriz[i][j] = 3;
        }
    }


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
