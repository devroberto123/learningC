#include<stdio.h>
int main(){
    int num,cont,divi=1;
    for(cont=0;cont<10;cont++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        divi=1;
        for(divi;divi<=num;divi++){
            
          if(num % divi ==0 ){
           printf("%d ",divi);
          } 
          
        }
        
    }
}