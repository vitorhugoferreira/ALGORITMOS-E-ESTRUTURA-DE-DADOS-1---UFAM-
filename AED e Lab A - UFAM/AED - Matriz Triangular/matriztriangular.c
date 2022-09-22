#include <stdio.h>

#define N 3


int triangular_inferior(double A[][N]){

    int verificacao;

    if(A[0][1] == 0 && A[0][2] == 0 && A[1][2] == 0){
        verificacao = 1;
    }
    else{
        verificacao = 0;
    }

    return verificacao;

}

int main(){
	
    double matriz[N][N];

    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    if(triangular_inferior(matriz) == 1){
        printf("1");
    }
    else{
        printf("0");
    }


	return 0;
}