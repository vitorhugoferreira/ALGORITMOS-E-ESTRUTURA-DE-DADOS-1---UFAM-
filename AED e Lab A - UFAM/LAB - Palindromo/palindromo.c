#include <stdio.h>
#include <string.h>


int main(){

    char vetor[41];

    char vetor2[41];

    int num;

    scanf("%d", &num);

    int i, j;

    for(i = 0; i < num; i++){
        scanf("%s", vetor);
        for(j = strlen(vetor) - 1; j >= 0; j--){
            printf("%s", vetor2[j]);
        }
    }

    



}