#include <stdio.h>

#define N 100

float ponderada(int n, float *v, float *w){

    float mediaPonderada = 0;

    int i;

    float multiplica = 0;

    float acumula = 0;

    for(i = 0; i < n; i++){
        multiplica = v[i] * w[i];
        acumula += multiplica;
    }

    float soma = 0;

    for(i = 0; i < n; i++){
        soma += w[i];
    }
    mediaPonderada = (acumula/soma);

    return mediaPonderada;
}

int lerVetor(float *v, int n){

    int i;

    for(i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }


}

int main(){

    int n;

    scanf("%d", &n);

    float valores[N];

    float pesos[N];

    lerVetor(valores, n);

    lerVetor(pesos, n);

    printf("%.2f", ponderada(n, valores, pesos));

}