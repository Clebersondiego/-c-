# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
main ()
{
int x,idade,codigo,horario,cont1_s=0,cont2_s=0;
char sexo,nome_filme[12];
int cont_maior=0,cont_18_meia=0,cont_f_ghost=0,cont_30_lobos=0;
for(x=1;x<=3;x++)
{
printf ("\n\n Digite a idade da pessoa que vai ao cinema ");
scanf("%d",& idade);
printf (" \n Digite o sexo da pessoa que vai ao cinema M/F ");
fflush(stdin);
sexo=getchar();
sexo = toupper(sexo);
printf ("\n\n Digite horário da sessão (1--> 14:30 hs -2 --> 20:30 hs ");
scanf("%d",& horario);
if( horario == 1)
cont1_s++;
else
cont2_s++;
printf ("\n\n Digite o tipo de Entrada ( 1-meia 2-inteira ) ");
scanf("%d",& codigo);
if(idade> 18 && codigo ==1 )
cont_18_meia++;
printf (" \n Digite o nome do filme ");
fflush(stdin);
gets(nome_filme);
if(sexo=='F'&& strcmp(nome_filme,"GHOST")==0)
cont_f_ghost++;
if(strcmp(nome_filme,"DANCA COM LOBOS")==0 && idade > 30 && codigo == 1 )
cont_30_lobos+
system("cls");
}
if( cont1_s > cont2_s)
printf ("\n\14:30 hs horário da sessão de maior lotação");
else
printf("\n\n20:30 hs horário da sessão de maior lotação");
printf("\n\nTotal de pessoas maiores de 18 anos que pagaram meia entrada %d ",cont_18_meia);
printf("\n\nTotal de mulheres assistiram ao filme GHOST %d ",cont_f_ghost);
printf("\n\nTotalde pessoas > de 30 anos - filme DANÇA COM LOBOS na sessão das 14:30 hs %d ",cont_30_lobos);
system("pause > null");
}
	

