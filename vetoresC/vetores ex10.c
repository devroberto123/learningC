#include<stdio.h>
#include<string.h>

int main(){

    int preco[40], valortotal, cont, verificador=0;
    char opcao=' ';

    while(opcao!='c' && opcao!='C'){

        valortotal=0;

        printf("menu:\n A - Cadastra as Mercadorias.\n B - Exibe o valor total das mercadorias. \nC - Sai do programa.\n ");

        scanf(" %c",&opcao);

        if(opcao=='A'||opcao=='a'){

            for(cont=0;cont<40;cont++){

                printf("digite o preço do produto[%d]:\n",cont);
                scanf("%d",&preco[cont]);

                verificador=1;
            }

        }

        if(opcao=='b'||opcao=='B'){

            if(verificador==1){

                for(cont=0;cont<40;cont++){

                    valortotal=valortotal+preco[cont];

                    if(cont==39){
                        printf("o preco e %d\n",valortotal);
                    }
                }

            }

            else{
                printf("ainda nao alocou preco nos seus produtos.\n\n\n\n");
            }
        }

    }

    return 0;
}