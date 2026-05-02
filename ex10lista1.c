#include<stdio.h>
int main(){
   int cont,cont2=0;
   float num,raiz;
   printf("digite um numero:\n");
   scanf("%f",&num);
   for(cont=0;cont<=num;cont++){
    if(cont%2!=0){
        cont2++;
         raiz=num-cont;
         if(raiz==0){
            printf("raiz de %g e %g ",num,cont2);
         }
         if(raiz<0){
            printf("a raiz aproximada de %g e %g",num,cont2);
         }
    }
    
   }
    return 0;
}