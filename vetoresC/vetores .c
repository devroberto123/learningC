#include<stdio.h>
int main(){
    int cont,num[20];
    for(cont=0;cont<20;cont++){
        printf("digite um numero para entrar no vetor:\n");
        scanf("%d",&num[cont]);

    }
    printf("esses são os vetores de tras pra frente: ");
    for(cont=19;cont>=0;cont--){
        printf("[%d]",num[cont]);
    }
    printf("vetores maiores que 10: ");
    for(cont=0;cont<20;cont++){
        if(num[cont]>10){
            printf("[%d] ",num[cont]);
        }
    }
    

    return 0;
}