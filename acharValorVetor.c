#include <stdio.h>
#include <stdlib.h>
#define LIN 10

int valores[LIN]; //variavel global




int main (void){
    int i;

    //criar o vetor
    for(i = 0; i < LIN; i++){
        valores[i] = rand() % 1000;
    }

    //ordernar_insercap_padrao();
    //IMPRIMIR O VETOR
    for(i = 0; i < LIN; i++){
        printf("%3d, ", valores[i]);
    }

    int busca, quant_busca = 0;
        printf("\n\nDigite o valor a ser buscado: ");
    scanf("%d", &busca);

    for(i = 0; i < LIN; i++){
        quant_busca++;
            if (valores[i] == busca) {
                printf("\nValor encontrado na posição: %d\n", i);
                break;
            }
    }
    printf("\nQuantidade de buscas: %d\n", quant_busca);
}
