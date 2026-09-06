#include<stdio.h>
int main(){
    int cont,maior,menor,num,soma=0;
    float media;
    for(cont=0;cont<15;cont++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        soma=soma+num;
        if(cont==0){
            maior=num;
            menor=num;
        }
        if(num>maior){
            maior=num;
        }
        else if(num<menor){
            menor=num;

        }
    }
    media=soma/15;
    printf("o maior foi %d o menor foi %d e a media dos numeros foi %f",maior,menor,media);
}