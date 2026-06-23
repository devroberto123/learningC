#include<stdio.h>
#include<string.h>

int main(){

    char vet[20];
    int cont,cont2,cont3,tam;

    printf("digite uma palavra:\n");

    gets(vet);

    tam=strlen(vet);

    for(cont=0;cont<tam;cont++){

        for(cont2=0;cont2<=cont;cont2++){

            for(cont3=0;cont3<tam;cont3++){

                printf("%c",vet[cont3]);
            }

            printf(" ");
        }

        printf("\n");
    }

    return 0;
}