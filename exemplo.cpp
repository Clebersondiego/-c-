#include <stdio.h>
#include <stdlib.h>
main()
{  
	
	float preco,total=0;
	int x;
	for(x=1;x <=5;x++)
	{printf("\ndigite o preco do produto");
	scanf("%f",&preco);
	total=total+preco;
	}
	printf("\n \n o total foi de R$ %0.2f",total);
}

