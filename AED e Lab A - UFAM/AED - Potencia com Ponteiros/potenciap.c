#include <stdio.h>

void quadrado(int *numero){

    
    *numero = *numero**numero;
 

}

int main(){

    int numero;

    scanf("%d", &numero);

    quadrado(&numero);

    printf("%d", numero);

}