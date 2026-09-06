#include<stdio.h>
#include<math.h>
int main(){
    float num,resultado;
    int rep;
    for(rep=1;rep<=10;rep++){
        printf("digite o numero:\n");
        scanf("%f",&num);
        if(num>=1){
            resultado = sqrt(num);
            printf("raiz de %g  e %g \n ",num,resultado);
            
        }
    }
}