#include<stdio.h>

unsigned quadrado(unsigned numero){
	
	unsigned quadrado;
	
	quadrado = numero*numero;
	
	return quadrado;
}

int main(){

	int num;

	int unidade, dezena, centena, milhar;

	scanf("%d", &num);
	
	if(num < 10){
		
		printf("%d\n", quadrado(num));
		
	}
	
	if(num > 10 && num < 100){
		
		unidade = num/10;
		dezena = num%10;
		
		printf("%d\n", quadrado(unidade) + quadrado(dezena));
			
	}

	if(num > 100 && num < 1000){

		unidade = num%10;
		dezena = (num/10)%10;
		centena = num/100;

		printf("%d\n", quadrado(unidade) + quadrado(dezena) + quadrado(centena));
	}
	
	if(num > 1000 && num < 10000){

		unidade = num%10;
		dezena = (num/10)%10;
		centena = (num/100)%10;
		milhar = num/1000;

		printf("%d\n", quadrado(unidade) + quadrado(dezena) + quadrado(centena));
	}
	
	
	unidade = num%10;
	dezena = (num/10)%10;
	centena = (num/100)%10;
	milhar = num/1000;
	
	
	printf("%d\n%d\n%d\n%d", unidade, dezena, centena, milhar);

	return 0;
}