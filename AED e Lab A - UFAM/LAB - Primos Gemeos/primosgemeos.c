#include <stdio.h>

int gemeos(int numero1, int numero2){

    if(numero2 == numero1 + 2 || numero1 == numero2 + 2){
        return 1;
    }
    else{
        return 0;
    }

}

int primo(int numero){

    int contador;

    if(numero == 2){
        return 1;
    }
    if(numero < 2 || numero % 2 == 0){
        return 0;
    }
    for(contador = 2; contador < numero/2; contador++){

        if(numero % contador == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int num1, num2;

    int verificador1;

    int verificador2;

    int gemini;
    
    while(scanf("%d %d", &num1, &num2) && num1 != 0 && num2 != 0){

        gemini = gemeos(num1, num2);

        if(gemini == 1){
            verificador1 = primo(num1);
            verificador2 = primo(num2);
            if(verificador1 == 1 && verificador2 == 1){
                printf("%d e %d sao gemeos", num1, num2);
            }
            else{
                printf("%d e %d nao sao gemeos", num1, num2);
            }
        }
        else{
            printf("%d e %d nao sao gemeos", num1, num2);
        }
        
    }
   
}