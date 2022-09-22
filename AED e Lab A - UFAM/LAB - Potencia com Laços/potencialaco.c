#include <stdio.h>

double potencia(double base, int expoente){

    double total;

    total = base;

    int i;

    if(expoente == 0){
            total = 1;
    }
    for(i = 1; i < expoente; i++){
        total = total * base;
    }
    return total;
}

int main(){

    double bas;

    int exp;

    while(scanf("%lf %d", &bas, &exp) && bas != -1 || exp != -1){
        
        printf("%.2lf\n", potencia(bas, exp));

    }

    
}