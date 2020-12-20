/*prog0310.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	float salario;
	
	printf("Qual o Salário: "); scanf("%f", &salario);
	/* - Usando if-else
	if (salario > 1000)
		salario *= 1.05;
	else
		salario *= 1.07;
	*/
	
	/* Usando operador condicional ? */
	salario = salario > 1000 ? salario*1.05 : salario*1.07;
	
	printf("Novo Salário: %.2f\n", salario);	
}