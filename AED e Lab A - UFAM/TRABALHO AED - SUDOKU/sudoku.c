#include <stdio.h>
#include <stdlib.h>

#define N 9

void imprimirMatriz(unsigned char matriz[][N]){
    unsigned char i, j;
    
    printf("-------------------------\n");
    for(i = 0; i < N; i++){
        printf("| ");
        for(j = 0; j < N; j++){
            if(matriz[i][j] == 0)
                printf("_ ");
            else if(matriz[i][j] < 10)
                printf("%hhu ", matriz[i][j]);
            else
                printf("%hhu ", matriz[i][j] - 9);
            if((j+1) % 3 == 0)
                printf("| ");
            
        }
        if((i+1) % 3 == 0)
                printf("\n-------------------------");
        printf("\n");
    }
}

void lerMatriz(unsigned char matriz[][N]){

    unsigned char i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%hhu", &matriz[i][j]);
        }
    }
}

void eliminarCelulas(unsigned char matriz[][N], unsigned char numCelulasEliminadas, unsigned seed){

    int count = numCelulasEliminadas;
    
    srand(seed);

    while(count > 0){
        unsigned char x = rand() % 9;
        unsigned char y = rand() % 9;

        if(matriz[x][y] != 0){
            matriz[x][y] = 0;
            count--;
        }
    }
}

char verificarLinha(unsigned char matriz[][N], unsigned char x, unsigned char y){

    unsigned char i;

    for(i = 0; i < 9; i++){
        if(matriz[x][y] == matriz[x][i] && i != y){
            return 0;
        }
    }
    return 1;
}

char verificarColuna(unsigned char matriz[][N], unsigned char x, unsigned char y){

    unsigned char i;

    for(i = 0; i < 9; i++){
        if(matriz[x][y] == matriz[i][y] && i != x){
            return 0;
        }   
    }
    return 1;
}

char verificarBloco(unsigned char matriz[][N], unsigned char x, unsigned char y){

    unsigned char inicioLinha = x - x % 3;

    unsigned char inicioColuna = y - y % 3;

    unsigned char i, j;


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i + inicioLinha][j + inicioColuna] == matriz[x][y] && i + inicioLinha != x && j + inicioColuna != y){ 
                return 0;
            }
        }
    }
    return 1;
}

char jogadaInvalida(unsigned char matriz[][N], unsigned char x, unsigned char y){
    
    if(verificarLinha(matriz, x, y) != 1){
        return 0;
    }
    if(verificarColuna(matriz, x, y) != 1){
        return 0;
    }
    if(verificarBloco(matriz, x, y) != 1){
        return 0;
    }

    return 1;
}

char preencherCelula(unsigned char matriz[][N], unsigned char x, unsigned char y, unsigned char valor){

    if(x > 8 || y > 8){
        return 0;
    }
    else if(valor > 9 || valor == 0){
        return 0;
    }
    else if(matriz[x][y] != 0){
        return 0;
    }
    else{
        matriz[x][y] = valor;
        return 1;
    }
}


int main(){
	
    unsigned char linha, coluna, valor;

    unsigned char numCelulas;

    unsigned char semente;

    unsigned char matriz[N][N];

    unsigned char contador = 0;

    lerMatriz(matriz);

    scanf("%hhu %hhu", &semente, &numCelulas);

    eliminarCelulas(matriz, numCelulas, semente);

    imprimirMatriz(matriz);

    while(numCelulas > 0){
        
        scanf("%hhu %hhu %hhu", &linha, &coluna, &valor);

        if(preencherCelula(matriz, linha, coluna, valor) == 1){
            numCelulas--; 
            if(jogadaInvalida(matriz, linha, coluna) == 0){
                contador++;
            }   
        }
        else{
            printf("Jogada Invalida\n");
        }
        
        imprimirMatriz(matriz);
 
    }

    if(contador != 0){
            printf("Voce perdeu\n");
        }else{
            printf("Parabens voce ganhou\n");
        }


	/* Digite seu código aqui ......
	
	Exemplos dos printf's:
	
	printf("Jogada invalida\n");
    printf("Parabens voce ganhou\n");
    printf("Voce perdeu\n");
    */
	
    
}