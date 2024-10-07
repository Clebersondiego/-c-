#include <stdio.h>
main()
{  float preco, maca,final;
printf("quantas maças foram compradas ? ");
scanf("%f",& maca);
if(maca < 12)
{ final = maca *1.3;
printf("O valor total %0.2f",final);
} 
else
{ printf("O valor total %0.2f",maca);
}
}
	

