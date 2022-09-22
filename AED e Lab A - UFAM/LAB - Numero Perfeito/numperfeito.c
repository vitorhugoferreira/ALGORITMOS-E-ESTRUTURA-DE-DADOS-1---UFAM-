#include <stdio.h>


int main(){

    int numero;

    scanf("%d", &numero);

    int acumulador = 0;

    int contador;

    for(contador = 1; acumulador < numero; contador++){

        if(numero % contador == 0){
            printf("%d\n", contador);
            acumulador += contador;
        }

    }

    if(acumulador == numero){
        printf("PERFEITO");
    }else{
        printf("NAO PERFEITO");
    }


}