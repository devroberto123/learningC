#include<stdio.h>
int main(){
    int cont,anterior,maior;
    int num,cont2=1;
    for(cont=0;cont<=10;cont++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        if(num==-1000){
            break;
        }
        if(cont2){
            anterior=num;
            cont2=0;
            maior=num;

        }
        else if(num>maior){
            
            maior=num;
            
        }
        
     anterior=num;

        

    }
    printf("o maior numero foi %d",maior);

}