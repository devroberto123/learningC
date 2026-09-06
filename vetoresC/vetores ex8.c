#include<stdio.h>

int main(){

    int vet[30],vet2[30];
    int cont,cont2,soma=0,verificador;

    for(cont=0;cont<30;cont++){

        printf("digite um numero:\n");
        scanf("%d",&vet[cont]);

        verificador = 0;

        for(cont2=0;cont2<soma;cont2++){

            if(vet2[cont2] == vet[cont]){
                verificador = 1;
            }
        }

        if(verificador == 0){

            vet2[soma] = vet[cont];
            soma++;
        }
    }

    printf("\nvetor sem repeticoes:\n");

    for(cont=0;cont<soma;cont++){
        printf("%d ",vet2[cont]);
    }

    return 0;
}