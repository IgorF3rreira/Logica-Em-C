
 #include <stdio.h>
 int main(){
        int i, valor;
         int v[10];

        for(i = 0; i < 10; i++){
           scanf("%d", &valor);

        if(valor > 0){
           v[i] = valor;
        }else{
           v[i] = 1;
         }
   }

    for(i=0; i<10; i++){
        printf("X[%d] = %d\n ", i,v[i]);
    }

     return 0;



}
