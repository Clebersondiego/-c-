#include <stdio.h>
#include <center.h>
#include <stdlib.h>

int main(){
PosTela (5,2);
   int x;

       printf("Andares: "); scanf("%d",&x);

       printf("--------------\n");

   int in[x], out[x], total[x], final = 0;

       for (int i=0;i<x;i++){

           printf("Entrada[%d]: ",i+1); scanf("%d",&in[i]);

           printf("Saida[%d]: ",i+1); scanf("%d",&out[i]);

           total[i] = in[i]+out[i];

           printf("TOTAL[%d]::> %d\n",i+1,total[i]);

               if (total[i]>15){

                   printf("Excesso de Passageiros!\n");

                   printf("Deve(m) Sair: %d\n", total[i]-15);

                   final+=15-in[i];

               }

               else final+=in[i];

           printf("--------------\n");

       }

   printf("Desceram: %d\n", final);

   return 0;

}
