#include <stdio.h>


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
	
	int linha, coluna;
	
	scanf("%d %d", &linha, &coluna);
	
	int i, j;
	
	int valores = 0;

    int sequenciaDiagonal = 0;
	
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			valores += 1;

            if(i == j){
                sequenciaDiagonal++;
                printf("%02d ", sequenciaDiagonal);
            }
            else if(valores == 100){
                valores = 0;
                printf("%02d ", valores);
            }			
			else if(primo(valores) == 1){
                printf("PP ", valores);
            }
			else{
				printf("%02d ", valores);
			}
		}
        printf("\n");
        if(valores == 100){
            valores = 0;
            sequenciaDiagonal = 0;
        }
	}
		
}