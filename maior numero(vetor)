#include <time.h>
#include <stdlib.h>
int main(){
   
    int i, maior_num=0, posicao=1;
    int v[100];

    srand(time(NULL));
  
    for(i = 0; i < 100; i++){
           v[i] = (rand() % 1000) + 1;
        if(v[i] > maior_num){
            maior_num = v[i];
            posicao = i+1;
        }
    }

    printf("%d\n %d\n", maior_num, posicao);
}
