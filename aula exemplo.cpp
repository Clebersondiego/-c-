# include <stdio.h>
# include <stdlib.h>
main ( )
{
int idade[5], i, x;
// Carrega o veto
for (i=0,x=1; i<=4; i++,x+1)
{
printf ("Digite a %d.a idade ",i+1);
scanf("%d",& idade[i]);
}
// Mostra os elementos do vetor
system("cls");
for (i=0; i<=4; i++)
{
printf ("%d ", idade[i]);
}
system("pause > null");
} 
