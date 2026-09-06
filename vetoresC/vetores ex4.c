#include<stdio.h>
#include<string.h>
int main(){
    int vet[20],cont,vet2[20];
    for(cont=0;cont<20;cont++){
        printf("prencha cada casa do vetor[%d]\n",cont);
        scanf("%d",&vet[cont]);


    }
    for(cont=0;cont<20;cont++){

        vet2[cont]=vet[cont]*(-1);
        printf("[%d] ",vet2[cont]);
    }
    return 0;
}