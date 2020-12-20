/*prog03e18.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	ano%4 == 0 ? printf("Ano %d é bissexto\n", ano)
			   : printf("Ano %d não é bissexto\n", ano);
}