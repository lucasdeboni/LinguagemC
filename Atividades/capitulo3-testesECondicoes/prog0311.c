/*prog0311.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	char estCivil;
	puts("Qual o Estado Civil: ");
	estCivil = getchar();
	if (estCivil == 'S' || estCivil == 's')
		printf("Solteiro");
	else
		if (estCivil == 'c' || estCivil == 'c')
			printf("Casado");
		else
			if (estCivil == 'D' || estCivil == 'd')
				printf("Divorciado");
			else
				if (estCivil == 'V' || estCivil == 'v')
					printf("Viúvo");
				else
					printf("Estado Civil Inválido");
	printf("\n");
}