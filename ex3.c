#include <stdio.h>
int main(){
    int num, result=0;
    int cont;
    printf("digite um numero\n");
    scanf("%d",&num);
    for(cont=1;cont<=num;cont++){
        result+=cont;
        if(result==num){
            printf("numero triangular %d",result);
            break;
        }
        else 
        printf("numero n triangular");
        
        
    }



}