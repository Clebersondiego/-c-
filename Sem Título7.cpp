#include <stdio.h>
main ()
{ float saldo, cpmf = 0;
printf("\n digite o saldo");
scanf("%f", & saldo);
if (saldo >= 1000.00 && saldo <2530)
{cpmf = saldo * (0.38/100);
printf("\n valor do cpmf R$ %0.2f");
}
}
