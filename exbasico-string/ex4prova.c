#include<stdio.h>
int main(){
    int num,cont,cont2,primo,teste;
    for(cont=0;cont<10;cont++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        if(num<=0){
            printf("numero não compativel\n");
        }else{
            primo=0;
            for(cont2=1;cont2<=num;cont2++){
                teste=num%cont2;
                if(teste==0){
                    primo++;
                }
            }
            if(primo==2){
                printf("o numero %d é primo\n",num);
            }
            else{
                printf("o numero %d não é primo\n",num);
            }
         
            
        }
    }

}