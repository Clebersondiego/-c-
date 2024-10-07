# include <stdio.h>
# include <stdlib.h>
# include <biblioteca.h>
main()
{
float num_1, num_2;
printf("Digite o primeiro numero: ");
scanf("%f", &num_1);
printf("Digite o segundo numero: ");
scanf("%f",&num_2);
printf("\nA media destes numeros e -> %0.2f", media(num_1, num_2));
system("pause > null");
}
