#include <stdio.h>
#include <stdlib.h>
main()
{
	int ladoA, ladoB, ladoC;
	printf("Digite os 3 valores:");
	scanf("%d %d %d", &ladoA, &ladoB, &ladoC );
	
	if ((ladoA == ladoB) && (ladoB == ladoC) ) {
		printf("\n O triangulo e equilatero");
	}else{
		if ( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
			printf("\n O triangulo é isosceles !");
		}else{
			printf("\n O triangulo e escaleno");
		}
	}
		
	
	
	
	
	
}
