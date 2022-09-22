#include <stdio.h>

int mdc(int a, int b){

    int maximodivisor;

    int maior;

    if(a > b){
        maior = a;
    }
    else if(b > a){
        maior = b;
        b = a;
    }
    while(maior != b){
        int aux;

        if(b > maior){

            aux = maior;
            maior = b;
            b = aux;   

        }
        maior = maior - b;
    }
    return maior;
}


int main(){

    int num1, num2;

    while(scanf("%d %d", &num1, &num2) && num1 != 0 && num2 !=0){

        printf("%d", mdc(num1, num2));

    }

    
}