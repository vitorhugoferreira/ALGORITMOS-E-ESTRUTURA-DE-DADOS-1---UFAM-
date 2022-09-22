#include <stdio.h>

int main(){

    int galeao, sicle, nuque;
    
    int valorG, valorS, valorN;

    int valornuque;

    int pagonuque;

    int troconuque;

    int pagoG, pagoS, pagoN;

    int trocoG, trocoS, trocoN;

    scanf("%d %d %d", &valorG, &valorS, &valorN);

    scanf("%d %d %d", &pagoG, &pagoS, &pagoN);

    valorG = valorG * 493;
    valorS = valorS * 29;
    valornuque = valorG + valorS + valorN;
    
    pagoG = pagoG * 493;
    pagoS = pagoS * 29;
    pagonuque = pagoG + pagoS + pagoN;

    troconuque = pagonuque - valornuque;

    galeao = (troconuque/493);
    sicle = ((troconuque)%(493))/29;
    nuque = ((troconuque)%(493))%29;      


    printf("Seu troco eh %d galeoes, %d sicles e %d nuques, Harry!", galeao, sicle, nuque);
    
}