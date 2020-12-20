/*prog0307.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        22/10/2020
 */
#include <stdio.h>
 
main()
{
	float salario, taxa;
	printf("Qual o salário: ");
	scanf("%f", &salario);
	if (salario < 1000)
		taxa = .05;
	else
		if (salario < 5000)
			taxa = .11;
		else
			taxa = .35;
		
	printf("Salário: %.2f Imposto: %.2f Líquido: %.2f\n", salario, salario*taxa, salario*(1.0-taxa));
}