#include<stdio.h>

#define N 100

int testa_PA(int n, int *v){

    int i;

    int termo = v[1] - v[0];

    int operacao;

    for(i = 2; i < n; i++){
        
        operacao = v[i] - v[i-1];
        
        if(operacao == termo){
            return termo;
        }
        else{
            return 0;
        }
    }
           
}

int main(){
	
	// Escreva seu codigo aqui
    
	 int n;

     int i;
	 
	 int vet[N];
	
	 scanf("%d", &n);
	
	 for(i = 0; i < n; i++){
		 scanf("%d", &vet[i]);
	 }
	
    printf("%d\n",testa_PA(n,vet));

}
