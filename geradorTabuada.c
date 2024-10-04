#include <stdio.h>

void tabuada(int n){
    int i;
        printf("\ntabuada do %d\n" ,n);
    for(i=1; i<=10; i++){
        printf("%d X %d = %d\n", n,i,i*n);
    }
}


int main() {
    int i, tab;
        printf("Digite a tabuada: \n");
    scanf("%d", &tab);

        for(i=2; i<=tab; i++){
            tabuada(i);
        }

    return 0;
}
