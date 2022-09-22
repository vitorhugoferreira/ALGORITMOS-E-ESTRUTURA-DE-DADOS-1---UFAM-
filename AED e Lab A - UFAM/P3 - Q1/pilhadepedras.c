#include <stdio.h>


void TPilha2(Pilha N, Pilha P, int array[]){	
	int tamanho = sizeof array / sizeof array[0];
	for(i = 0; i<tamanho; i++){
		if(i>0){
			push(&P, array[i]);
		}else if(i<0){
			push(&N, array[i]);
		}else{
			pop(&P);
			pop(&N);
		}
	}
}