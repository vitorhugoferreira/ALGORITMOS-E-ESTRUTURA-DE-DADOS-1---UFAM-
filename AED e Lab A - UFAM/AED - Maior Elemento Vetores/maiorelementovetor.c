#include <stdio.h>

#define N 100

void maiorElemento(int *v, int n, int *maior){

    *maior = v[0];

    int i;

    for(i = 0; i < n; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }       
    }
}

void lerVetor(int *v, int n){

    int i;

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }   
}
    
int main(){
    int n;
    int v[N];
    int maior;

    scanf("%d", &n);
    lerVetor(v, n);
    
    maiorElemento(v, n, &maior);
    printf("%d\n", maior);

    return 0;
}