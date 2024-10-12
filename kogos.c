#include <stdlib.h> 
#include <stdio.h>  
#include <time.h>   

int main() {
  srand(time(NULL));

  int pauloKogos = 1;
  int mulherBonita = 1;
  int regimeCambialFlutuante = rand() % 101; //gera um número randômico entre 0 e 100

  do {
    regimeCambialFlutuante = rand() % 101;
    mulherBonita++;
    printf("- Qual seu regime cambial favorito?\n");
    printf("- Tanto faz...\n");
    printf("AVISO: Nunca mais saia com ela.\n");
  } while (pauloKogos + regimeCambialFlutuante > 2); 

  if (pauloKogos + regimeCambialFlutuante <= 2) { //caso o número gerado seja 0 ou 1 (aprox. 2%), roda:
    printf("- Qual seu regime cambial favorito?\n");
    printf ("- Cambio flutuante!\n");
    printf("AVISO: Pode sair com ela.\n");
    printf("Quantidade de mulheres: %d", mulherBonita);
  }
  return 0;
}