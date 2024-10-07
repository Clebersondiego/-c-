#include <stdio.h>
main()
    //lendo valor inteiro
{  int a = 50;
 printf("o valor de a é = %d  \n", a);
 scanf("%d", &a);
 printf("o valor de a mudou para %d",a);




//lendo valor quebrado 
 float b = 5.5;
 printf("o valor de b é = %f \n" , b);
 scanf("%f", &b);
 printf("o valor de a mudou pra %f", b);

//lendo letra
 char letra = 't';
 printf("o valor de b é = %c \n" , letra);
 fflush(stdin);
 scanf("%c", &letra);
 printf("o valor de a mudou pra %c", letra);

 
}
