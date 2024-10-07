#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{     // Crie um algoritmo que leia 2 notas e moestre a media entre elas .
      
      //definindo variaveis 
	 float nota1, nota2,resultado ;
	 
	  //lendo primeiro valor
	 printf("/n digite a primeira nota: ");
	 scanf("%f", & nota1 );
	 
	 // lendo segundo valor
	  printf("/n digite a segunda nota: ");
	 scanf("%f", & nota2 );
	 
	 // calculando e mostrando resultado final 
	 resultado = (nota1 + nota2 ) / 2;
	 printf(" A media e: %f", resultado);
	 
}
