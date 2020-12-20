/*prog0215.c : Variáveis
 *Página: 54
 *AUTOR:       Lucas Deboni
 *DATA:        18/10/2020
 */
#include <stdio.h>

main()
{
	int num=1000;
	printf("Introduza um Caractere: ");
	scanf("%c",&num);
	printf("O valor de num = %d cuo caractere = '%c'\n", num, (char) num);
}