#include<stdio.h>
#include<string.h>
int main(){
    int cont,soma=0,tam;
    char palavra[50];
    printf("digite uma plavra:\n");
    gets(palavra);
    tam=strlen(palavra);
    for(cont=0;cont<tam;cont++){
        if(palavra[cont]=='a'||palavra[cont]=='e'||palavra[cont]=='i'||palavra[cont]=='o'||palavra[cont]=='u'){
            soma++;
        }
    }
printf("a palvra tinha %d vogais.",soma);
    return 0;
}