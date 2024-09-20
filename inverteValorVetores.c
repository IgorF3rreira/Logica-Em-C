#include <time.h>
 #include <stdlib.h>
 int main(){

    int i, maior_num=0, posicao=1;
     int v[20];

    srand(time(NULL));

    for(i = 0; i < 20; i++){
    v[i] = (rand() % 20) + 1;
     
    }

      for(i = 0; i < 21; i++){
         printf("v[%d] = %d\n", i, v[i]);

         printf("-------------------------");
         
           printf("v[%d] = %d\n", i, v[20-i]);
      }
   
    
 }
