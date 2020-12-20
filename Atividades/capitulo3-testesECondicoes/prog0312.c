/*prog0312 : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	char estCivil;
	printf("Qual o estado Civil: ");
	scanf(" %c", &estCivil);
	switch(estCivil)
	{
		case 'c':
		case 'C': printf("Casado\n"); break;
		case 's':
		case 'S': printf("Solteiro\n"); break;
		case 'd':
		case 'D': printf("Divorciado\n"); break;
		case 'v':
		case 'V': printf("Viúvo\n"); break;
		default : printf("Estado Civil Incorreto \n");
	}
}