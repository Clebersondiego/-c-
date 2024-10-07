#include<stdio.h>
#include<stdlib.h>
main()
{
	float valor1,valor2 ;
	int opcao ;
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf("escolha uma opcão:");
printf ("\n1-Soma");
printf ("\n2-Subtrair");  
printf ("\n3-Dividir");
printf ("\n4-Multiplicar");
scanf("%d", &opcao);
switch(opcao){
	case 1:
		printf("Resultado da soma: %f",valor1 + valor2);
		break;
			case 2:
		printf("Resultado da soma: %f",valor1 - valor2);
		break;
			case 3:
		printf("Resultado da soma: %f",valor1 / valor2);
		break;
			case 4:
		printf("Resultado da soma: %f",valor1 * valor2);
		break;
		default:
			printf("Opcão invalida!");
			break;
}
	
	
	
}
