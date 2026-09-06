#include<stdio.h>
int main(){
    
    int num,num2,cont,cont2=0,impares=0;
    printf("digite um numero(qtd de impares):\n");
    scanf("%d",&num);
     printf("digite o limite:\n");
    scanf("%d",&num2);
    if(num<num2/2){
        for(cont=0;cont<=num2;cont++){
            if(cont%2!=0){
                cont2++;
                printf("%d + ",cont);
                impares=impares+cont;
                if(cont2==num){
                    break;
                }
                
            }
        }
        printf("= %d",impares);
       
    }
     
    return 0;
}