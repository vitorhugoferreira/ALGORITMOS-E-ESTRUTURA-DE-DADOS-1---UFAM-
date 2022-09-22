#include <stdio.h>

#define N 10

int lerVetor(int n, float *vetor){

    int i;

    for(i = 0; i < n; i++){
        scanf("%f", &vetor[i]);
    }

}


int main(){

    int n;

    int resultado;
    
    float valores[N];

    float pesos[N];

    scanf("%d", &n);

    lerVetor(n, valores);

    lerVetor(n, pesos);

    int i;

    float soma = 0;

    for(i = 0; i < n; i++){
        soma += pesos[i];
    }

    float multiplica = 0;

    float acumula = 0;

    for(i = 0; i < n; i++){
        multiplica = valores[i] * pesos[i];
        acumula += multiplica;
    }

    printf("Media Ponderada: %.2lf", (acumula/soma));

}