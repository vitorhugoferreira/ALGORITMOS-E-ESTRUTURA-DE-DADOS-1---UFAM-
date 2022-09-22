#include <stdio.h>

#define N 10

void imprimirParImpar(int M[][N], int numlinhas, int numColunas){

    int i, j;

    for(i = 0; i < numlinhas; i++){
        printf("\n");
        for(j = 0; j < numColunas; j++){
            if(M[i][j] % 2 == 0){
                M[i][j] = 1;
                printf("%d ", M[i][j]);
            }else{
                M[i][j] = 0;
                printf("%d ", M[i][j]);
            }
        }
    }
}


void lerMatriz(int M[][N], int numlinhas, int numColunas){
    int i, j;

    for(i = 0; i < numlinhas; i++){
        for(j = 0; j < numColunas; j++){
            scanf("%d", &M[i][j]);
        }
    }
}

int main(){
    int l, c;
    int m[N][N];

    scanf("%d %d", &l, &c);
    lerMatriz(m, l, c);
    
    imprimirParImpar(m, l, c);

    return 0;
}