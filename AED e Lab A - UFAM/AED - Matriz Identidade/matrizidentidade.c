#include<stdio.h>



int identidade(int n, double A[][n]){

    int i, j;

    int verificacao;

    if(A[0][0] == 1 && A[1][1] == 1 && A[2][2] == 1 && A[0][1] == 0 && A[0][2] == 0 && A[1][2] == 0 && A[1][0] == 0 && A[2][0] == 0 && A[2][1] == 0){
        verificacao = 1;
    }
    else{
        verificacao = 0;
    }

    return verificacao;

}
      // 0 1 2
  //0  //1 0 0
  //1  //0 1 0
  //2  //0 0 1  

int main(){
    int n, i, j;
  
    n = 3;

  double m[n][n];
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    if(identidade(n, m) == 1 ){
        printf("Matriz Identidade");
    }else{
        printf("A Matriz não é Identidade");
    }

  return 0;
}