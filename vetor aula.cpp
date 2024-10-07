#include <stdio.h>
#include <stdlib.h>

main()
{



int A[5],B[5],R[5], x;
for(x=0; x<=4; x++)

{
printf("\n digite o %d valor do vetor A",x+1);
scanf("%d",& A[x]);
printf("\n digite o %d valor do vetor B",x+1);
scanf("%d",& B[x]);
R[x]=A[x]*B[x];
}
for (x=0;x<=4;x++)
printf("\n%d",R[x]);

}
