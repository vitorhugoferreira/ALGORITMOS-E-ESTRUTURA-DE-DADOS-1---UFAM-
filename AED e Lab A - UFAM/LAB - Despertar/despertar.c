#include <stdio.h>

int ler_horario(){

  int hora, minuto, segundo;

  int horario;

  scanf("%d %d %d", &hora, &minuto, &segundo);

  hora = hora * 3600;
  minuto = minuto * 60;

  horario = hora + minuto + segundo;

  return horario;
}

void imprimir_horario(int horarioFinal){

  int horaf, minutof, segundof;

  horaf = (horarioFinal / 3600) % 24;

  minutof = (horarioFinal % 3600) / 60;

  segundof = horarioFinal % 60;

  printf("%02d:%02d:%02d\n", horaf, minutof, segundof);
}

int main(){

  // declaração de variáveis
  int horarioEntrada;
  int horarioTemp;
  int horarioFinal;

  // leitura da quantidade de vezes que o programa vai rodar
  int n;
  scanf("%d", &n);
  do{
    // leitura dos horários
    horarioEntrada = ler_horario();
    horarioTemp = ler_horario();

    horarioFinal = horarioEntrada + horarioTemp;

    imprimir_horario(horarioFinal);
    n--;
  } while (n != 0);

}