#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float qtd_fitas_total, qtd_fitas_locadas, qtd_fitas_multa, valor_aluguel, faturamento, multa, qtd_fitas_final, qtd_fitas_estragam;

main()
{ 

 printf("Digite a quantidade de fitas:");
 scanf("%f", &qtd_fitas_total);
 printf("Digite o valor do aluguel:");
 scanf("%f", &valor_aluguel);
 
 qtd_fitas_locadas=qtd_fitas_total/3;
 faturamento=(qtd_fitas_locadas*12)*valor_aluguel;
 
 qtd_fitas_multa=qtd_fitas_locadas/10;
 multa=(valor_aluguel*0.10) *qtd_fitas_multa;
 
 qtd_fitas_estragam=qtd_fitas_total*0.02;
 
 qtd_fitas_final=qtd_fitas_total-(qtd_fitas_estragam+(qtd_fitas_total/10));
 
 printf("O faturamento anual e: %f\n", faturamento);
 printf("O ganho com multas por mes e: %f\n", multa);
 printf("A quantidade de fitas no final do ano e: %f\n",qtd_fitas_final);
 	
	
	
	
}
