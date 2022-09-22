#include <stdio.h>

float renda(float valor){

    float lucro;

    float aumento;

    aumento = (valor * 1.2)/100;

    lucro = valor + aumento;

    return lucro;
}


int main(){

    float deposito;

    int meses;

    int rendimento;

    int contador;

    scanf("%f\n", &deposito);

    scanf("%d", &meses);

    for(contador = 0; contador < meses; contador++){

        printf("%.2f\n", renda(deposito));

        deposito = renda(deposito); 

    }
    
}