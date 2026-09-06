#include<stdio.h>

int main(){
    int vet[12],cont,maior,menor,cont2;
    for(cont=0;cont<12;cont++){
      printf("digite a temperatura media em Gc:\n");
      scanf("%d",&vet[cont]);
      if(cont==0){
        maior=vet[cont];
        menor=vet[cont];
      }


    }
    for(cont=0;cont<12;cont++){
      if(vet[cont]>maior){
        maior=vet[cont];
      }
      if(vet[cont]<menor){
        menor=vet[cont];
      }
      
    }
    for(cont2=0;cont2<12;cont2++){
      if(cont2==0){
        printf("janeiro fez : %d graus",vet[cont]);

      }
       if(cont2==1){
         printf("fevereiro fez: %d",vet[cont]);
        
      }
       if(cont2==2){
         printf("março: %d",vet[cont]);
        
      }
       if(cont2==3){
         printf("abril: %d",vet[cont]);
        
      }
       if(cont2==4){
         printf("maior: %d",vet[cont]);
        
      }
       if(cont2==5){
         printf("junho: %d",vet[cont]);
        
      }
       if(cont2==6){
         printf("julho: %d",vet[cont]);
        
      }
       if(cont2==7){
         printf("agosto: %d",vet[cont]);
        
      }
       if(cont2==8){
         printf("setembro: %d",vet[cont]);
        
      }
       if(cont2==9){
         printf("outubro: %d",vet[cont]);
        
      }
       if(cont2==10){
         printf("novembro: %d",vet[cont]);
        
      }

       if(cont2==11){
         printf("dezembro: %d",vet[cont]);
        
      }
    
        
      }
        printf(" o mes com maior grau foi %d  e o menor foi %d",maior,menor);

}