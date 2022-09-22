#include <stdio.h>
#include <string.h>


void movimentoJoe(char *movimentos, int linha, int coluna, int matriz[linha][coluna], int *posicaoX, int *posicaoY, int *life, int *moeda){

    int i;

    char ultimoMove;

    int bolsoAnterior;

    int vidaAnterior;

    for(i = 0; i < strlen(movimentos); i++){

        if(movimentos[i] == 'D'){
            ultimoMove = 'D';
            (*posicaoX)++;
        }
        else if(movimentos[i] == 'A'){
            ultimoMove = 'A';
            (*posicaoX)--;
        }
        else if(movimentos[i] == 'W'){
            ultimoMove = 'W';
            (*posicaoY)--;
        }
        else if(movimentos[i] == 'S'){
            ultimoMove = 'S';
            (*posicaoY)++;
        }
        else if(movimentos[i] == 'Z'){
            if(ultimoMove == 'D'){
                (*posicaoX)--;
            }
            if(ultimoMove == 'A'){
                (*posicaoX)++;
            }
            if(ultimoMove == 'W'){
                (*posicaoY)++;
            }
            if(ultimoMove == 'S'){
                (*posicaoY)--;
            }
            
        }
        if(matriz[*posicaoY][*posicaoX] == 22){

            (*life) = (*life) - 5;

        }
        if(matriz[*posicaoY][*posicaoX] == 11){

            (*moeda)++;
            matriz[*posicaoY][*posicaoX] = 0;

        }
    }
    

}

int main(){

    int linha, coluna;

    char movimentos[21];

    int posicaoX = 0;

    int posicaoY = 0;

    int life = 100;

    int moeda = 0;

    scanf("%d %d", &linha, &coluna);

    int matriz[linha][coluna];

    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            
            scanf("%d", &matriz[i][j]);

        }

    }

    scanf("%s", movimentos);

    movimentoJoe(movimentos,linha, coluna, matriz, &posicaoX, &posicaoY, &life, &moeda);

    printf("posicao x: %d\nposicao y: %d\nmoedas: %d\nlife: %d", posicaoX, posicaoY, moeda, life);



}