#include <stdio.h>
#define TAM 30

void inverte(int n, int *vet){  

    int i;

    for(i = n - 1; i >= 0; i--){
        printf("%d ", vet[i]);
    }

}


int main(){

    int n;

    int vet[TAM];

    scanf("%d", &n);
    
    int i;

    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    inverte(n, vet);
}