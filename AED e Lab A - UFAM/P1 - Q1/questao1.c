#include <stdio.h>


int main(){
	
	double peso, preco, tara, valorFinal;
	
	int servico;
	
	peso = 0;

	peso = peso - 0.825;
	
	scanf("%d", &servico);
	
	scanf("%lf", &peso);
	
	if(servico == 2){
		
		tara = 0.423;
		
		preco = 24.42;
		
		valorFinal = (peso + tara - (tara)) * preco;
		
	}
	
	if(servico == 1){
		
		preco = 17.13;
		
		valorFinal = peso * preco;
			
	}
	
	if(servico == 3){
		
		preco = 18.81;
		
		valorFinal = peso * preco;
	}
	
	printf("%.2lf", valorFinal);
	
	
	
	
	
}