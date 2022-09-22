#include <stdio.h>

int main(){
	
	int numDisciplinas;
	
	int cargaHoraria;
	
	double nota;
	
	int frequencia;
	
	int frequenciaTotal = 0;
	
	double mediaFinal = 0;

    double somaNota = 0;

    int numDis = 0;
	
	scanf("%d", &numDisciplinas);
	
	int i, j, k;
	
	for(i = 0; i < numDisciplinas; i++){
		
        numDis++;

        frequenciaTotal = 0;

		scanf("%d", &cargaHoraria);
		
		if(cargaHoraria == 10){
			for(j = 0; j < 5; j++){
				
				scanf("%d", &frequencia);
				
				if(frequencia == 1){
					frequenciaTotal += 2;
				}
			}
		}
        else if(cargaHoraria == 30){
            for(j = 0; j < 15; j++){

                scanf("%d", &frequencia);

                if(frequencia == 1){
                    frequenciaTotal += 2;
                }
            }
        }
        else if(cargaHoraria == 60){
            for(j = 0; j < 30; j++){

                scanf("%d", &frequencia);

                if(frequencia == 1){
                    frequenciaTotal += 2;
                }
            }
        }
        else if(cargaHoraria == 90){
            for(j = 0; j < 45; j++){

                scanf("%d", &frequencia);

                if(frequencia == 1){
                    frequenciaTotal += 2;
                }
            }
        }

        mediaFinal = 0;

        somaNota = 0;

        for(k = 0; k < 3; k++){

            scanf("%lf", &nota);

            somaNota += nota;

        }

        mediaFinal = somaNota/3;


		if(frequenciaTotal < ((cargaHoraria)*(0.75))){
            printf("Disciplina %d: RF\n", numDis);
	    }
        else if(mediaFinal >= 5.00){
            printf("Disciplina %d: AP\n", numDis);
        }else{
            printf("Disciplina %d: RN\n", numDis);
        }

    }
}