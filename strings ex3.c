#include<stdio.h><string.h>
int main(){
    char nome1[50],nome2[50],result[100];
    int soma=0,cont,cont2,tam1,tam2;
    printf("digite um nome:\n");
    gets(nome1);
    printf("digite o segundo nome:\n");
    gets(nome2);
    tam1=strlen(nome1);
    tam2=strlen(nome2);
    for(cont=0;cont<tam1;cont++){
        result[cont]=nome1[cont];
        soma++;
    }
    for(cont2=0;cont2<tam2;cont2++){
        result[soma]=nome2[cont2];
        soma++;
    }
    for(cont=0;cont<(tam1+tam2);cont++){
        printf("%c",result[cont]);
    }


    return 0;
}