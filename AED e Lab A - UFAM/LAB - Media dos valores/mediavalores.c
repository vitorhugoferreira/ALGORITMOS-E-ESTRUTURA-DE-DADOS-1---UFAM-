#include <stdio.h>

#define N 100



int lerVetor(int n, int *v){

    int i;

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

double mediaVetor(int n, int *v){

    int i;

    double media = 0;

    double resultado;

    for(i = 0; i < n; i++){
        media += v[i];
    }

    resultado =  media/n;

    return resultado;

}

int maioresMedia(int n, int *v, double media){

    int i;

    int contador = 0;

    for(i = 0; i < n; i++){
        if(media < v[i]){
            contador++;
        }
    }

    return contador;

}

int menoresMedia(int n, int *v, double media){

    int i;

    int contador = 0;

    for(i = 0; i < n; i++){
        if(media > v[i]){
            contador++;
        }
    }

    return contador;

}

int main(){

    int tam;

    double media;

    int quantidadeMaiores;

    int quantidadeMenores;

    scanf("%d", &tam);

    int vetor[N];

    lerVetor(tam, vetor);

    media = mediaVetor(tam, vetor);

    quantidadeMaiores = maioresMedia(tam, vetor, media);

    quantidadeMenores = menoresMedia(tam, vetor, media);

    printf("%d %d", quantidadeMaiores, quantidadeMenores);



}