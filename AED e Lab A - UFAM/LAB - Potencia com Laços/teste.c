#include <stdio.h>

int main(){
	
	double base;
	int expoente;
	double operacao;
    double total = 0;
    int i;

    scanf("%lf %d", &base, &expoente);

    for(i = 1; i < expoente; i++){
        operacao = base * base;
        total += operacao;
    }
    printf("%.2lf", total);
	
}