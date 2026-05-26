#include<stdio.h>
#include<string.h>
int main(){
    char vet1[20],vet2[20];
    int cont,tam,soma=0;
    printf("digite uma palvra;\n");
    gets(vet1);
    tam=strlen(vet1);
    for(cont=tam-1;cont>=0;cont--){
        
        vet2[soma]=vet1[cont];
        soma++;

    }
    for(cont=0;cont<tam;cont++){
        printf("%c",vet2[cont]);
    }
    return 0;
}