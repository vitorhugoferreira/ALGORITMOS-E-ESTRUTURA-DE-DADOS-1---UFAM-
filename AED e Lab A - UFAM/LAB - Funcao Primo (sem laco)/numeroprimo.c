#include <stdio.h>

int primo(int numero){

    int contador;

    if(numero == 1){
        return 0;
    }
    if(numero == 2){
        return 1;
    }
    for(contador = 2; contador < numero; contador++){

        if(numero % contador == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int num;

    int verificador;

    scanf("%d", &num);

    verificador = primo(num);

    if(verificador == 1){
        printf("%d e um numero primo", num);
    }

    if(verificador == 0){
        printf("%d nao e um numero primo", num);
    }
}