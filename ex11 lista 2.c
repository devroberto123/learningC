#include<stdio.h>
int main(){
    int num,par=0,impar=0,cont;
    for(cont=0;cont<20;cont++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        
        if(num %2==0){
            par++;
        }
        if(num%2!=0){
            impar++;
        }
    }
    printf(" a quantidade de numeros pares foi %d e impar foi %d:\n",par,impar);
}