# include <stdio.h>
# include <stdlib.h>
main ( )
{
int a=1,qtde;
printf(" \n Digite a quantidade vez que o laço vai repita ... ");
scanf("%d",& qtde);
do {
printf("\n %d", a);
a++;
} while (a <= qtde);
system("pause > null");
}
