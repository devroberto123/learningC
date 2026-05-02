#include<stdio.h>
int main(){
    int num,cont,mult,media=0,cont2=0,media2,cont3=0;
    for(cont=0;cont<10;cont++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        if(num==-1){
            break;
        }
        cont3++;
        media=media+num;
        printf(" %d \n",num);
        if(num %8==0){
            cont2++;
        }

    
    }
    media2=media/cont3;
    printf("\n a quantidade de multiplos de 8 digitados foi %d a media dos numeros foi %d",cont2,media2);


    return 0;
}