#include<stdio.h>
#include<math.h>
int main(){
    
    int num,cont,mult,cont2,media=0,cont3=0,media2;
    for(cont=0;cont<10;cont++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        if(num==0){
            break;
        }
        for(cont2=1;cont2<=num;cont2++){
            mult = 3*cont2;
            if(mult==num){
                cont3++;
                media=media+mult;

            }
        }

    }
    media2 = media/cont3;

    printf("a media dos numeros multiplos de 3 é: %d",media2);
   
    return 0;
}