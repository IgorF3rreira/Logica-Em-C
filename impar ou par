#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero_aleatorio;
  int escolha;

  printf("escolha PAR [1] OU IMPAR [2]: ");
  scanf("%d", &escolha);

  if (escolha == 1) {
    printf("você escolheu PAR\n");
      // Inicializa o gerador de números aleatórios com a semente baseada no tempo
      // atual
    system("clear");
    if (numero_aleatorio % 2 == 0){
      srand(time(NULL));

      numero_aleatorio = rand() % 100;
      printf(" %d\n", numero_aleatorio);
      printf("Parabens você ganhou - PAR!!! \n");

    }
    
      return 0;
    }else if (escolha == 2) {
    printf("você escolheu IMPAR\n");
    
    if (numero_aleatorio % 2 > 0){
      printf("Parabens você ganhou - ÍMPAR \n");
    
    srand(time(NULL));

    numero_aleatorio = rand() % 100;
    printf(" %d\n", numero_aleatorio);

    }
    
   
  
    return 0;
  }else {
  printf("invalido tente novamente\n");
  }

}

