#include<stdio.h>
#include<string.h>
int main(){
    char vet1[20],vet2[20];
    int cont,tam,soma=0;
    printf("digite uma palavra:\n");
    gets(vet1);
    tam=strlen(vet1);
    for(cont=0;cont<tam;cont++){
        if(vet1[cont]=='a'||vet1[cont]=='e'||vet1[cont]=='i'||vet1[cont]=='o'||vet1[cont]=='u'){
            vet2[soma]=vet1[cont];
            soma++;

        }
    }
    for(cont=0;cont<tam;cont++){
        if(vet1[cont]!='a'&&vet1[cont]!='e'&&vet1[cont]!='i'&&vet1[cont]!='o'&&vet1[cont]!='u'){
            vet2[soma]=vet1[cont];
            soma++;
        }
    }
    for(cont=0;cont<tam;cont++){
        printf("[%c]",vet2[cont]);
    }
    return 0;
}