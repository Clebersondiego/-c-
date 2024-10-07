# include <stdio.h>
# include <stdlib.h>
# define n 3
main ( )
{
int matriz_int[n][n],l,c,t=1,z=1;
// Carrega a Matriz
for (l=0;l < n;l++,t++)

for (c=0;c < n;c++,z++)
{
printf ("Linha = %d Coluna = %d ",t,z);
scanf("%d",& matriz_int[l][c]);
}
z=1;

// Mostra os elementos da matriz
system ("cls");
for (l=0;l < n;l++)
{
for (c=0;c < n;c++)
{
printf (" %d ", matriz_int[l][c]);
}
printf("\n");
}
system("pause > null");
}
/*Fim main*/
