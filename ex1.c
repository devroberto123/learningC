#include<stdio.h>
int main(){
    int num,rep1,rep2;
    for(rep1=0;rep1<=100;rep1++){
        printf("digite um numero:\n");
        scanf("%d",&num);
        if(num==-999){
            break;
        }
        for(rep2=1;rep2<=num;rep2++){
            if(num %rep2==0){
                printf("%d  ",rep2);
            
            }
        }
    }
}