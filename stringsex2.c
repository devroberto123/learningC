#include<stdio.h>
#include<string.h>
int main(){
    int cont,tam;
    char palavra[50];
    printf("digite uma plavra:\n");
    gets(palavra);
    tam=strlen(palavra);
    printf("essa são as consoantes: ");
    for(cont=0;cont<tam;cont++){
        if(palavra[cont]!='a'&&palavra[cont]!='e'&&palavra[cont]!='i'&&palavra[cont]!='o'&&palavra[cont]!='u'){
            printf("%c ",palavra[cont]);
        }
    }

    return 0;
}