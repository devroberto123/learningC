#include<stdio.h>
int main(){

    int num,num2,cont,maior=0,menor=0;
      printf("digite um numero(qtd digitada):\n");
      scanf("%d",&num);
      for(cont=0;cont<num;cont++){
        printf("digite os numeros:\n");
        scanf("%d",&num2);
        if(cont==0){
            maior=num2;
            menor=num2;
        }
        
        else if(num2>maior){
          maior= num2;

        }
        else if(num2<menor){
            menor=num2;
        }
      }
      printf("o maior numero digitado foi %d e o menor foi %d",maior,menor);

    return 0;
}