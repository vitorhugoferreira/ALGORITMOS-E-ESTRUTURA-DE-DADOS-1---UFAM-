#include <stdio.h>


int main(){

    double peso, preco, tara, valorFinal;

    double pesoTotal;

    int servico;

    scanf("%d", &servico);

    scanf("%lf", &peso);

    //Note que no meu caso o prato usado para refeições é o mesmo
    //prato usado para consumir lanches, portanto o valor da tara
    //é o mesmo para o preço ficar certo.

    if(servico == 1){

       tara = 0.825;

       preco = 17.13;
       
       pesoTotal = peso + tara;

       valorFinal = (pesoTotal - tara) * preco;

    }

    if(servico == 2){

       tara = 0.423;

       preco = 24.42;
       
       pesoTotal = peso + tara;

       valorFinal = (pesoTotal - tara) * preco;

    }

    //Como o prato utilizado é o mesmo de refeições
    //o valor da tara a ser descontado vai ser o mesmo do servico 1 (refeições)

    if(servico == 3){

       tara = 0.825;

       preco = 18.81;
       
       pesoTotal = peso + tara;

       valorFinal = (pesoTotal - tara) * preco;

    }

    printf("%.2lf", valorFinal);


}