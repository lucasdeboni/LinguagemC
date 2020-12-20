/*prog0309.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main ()
{
	float salario;
	char estCivil;
	
	printf("Qual o Salário: "); scanf("%f", &salario);
	printf("Qual o Est. Civil: "); scanf(" %c", &estCivil);
	if (estCivil == 'C' || estCivil == 'c')
		printf("Imposto: %.2f\n", salario * 0.09);
	else
		if (estCivil == 'S' || estCivil == 's')
			printf("Imposto: %.2f\n", salario * 0.10);
		else
			printf("Estado Civil Incorreto!!!\n");
}