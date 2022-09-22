#include <stdio.h>

#define N 100

void histograma(int n, float *v, int *h){

    int i;
    
    for(i = 0; i < n; i++){

        if(v[i] >= 0 && v[i] < (float) 0.1){
            h[0] += 1;
        }
        else if(v[i] >= (float) 0.1 && v[i] < (float) 0.2){            
            h[1] += 1;
        }
        else if(v[i] >= (float) 0.2 && v[i] < (float) 0.3){            
            h[2] += 1;
        }
        else if(v[i] >= (float) 0.3 && v[i] < (float) 0.4){
          	h[3] += 1;
        }
        else if(v[i] >= (float) 0.4 && v[i] < (float) 0.5){
            h[4] += 1;
        }
        else if(v[i] >= (float) 0.5 && v[i] < (float) 0.6){
            h[5] += 1;
        }
        else if(v[i] >= (float) 0.6 && v[i] < (float) 0.7){
            h[6] += 1;
        }
        else if(v[i] >= (float) 0.7 && v[i] < (float) 0.8){
            h[7] += 1;
        }
        else if(v[i] >= (float) 0.8 && v[i] < (float) 0.9){
            h[8] += 1;
        }
        else if(v[i] >= (float) 0.9 && v[i] <= (float) 1.0){
            h[9] += 1;
        }

    }
}

int zeraVetor(int n, int *v){

    int i;

    for(i = 0; i < 10; i++){

        v[i] = 0;

    }

}

int main(){

    int n;

    float v[N];

    int h[10];

    scanf("%d", &n);
    
    int i;

    for(i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    zeraVetor(n, h);

    histograma(n, v, h);

    int j;

    for(j = 0; j < 10; j++){
        printf("%d ", h[j]);
    }    


	return 0;
}