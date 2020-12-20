/*prog0308.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        22/10/2020
 */
#include <stdio.h>
 
int main()
{
	int a, b;
	printf("Introduza dois nºs: ");
	scanf("%d%d", &a, &b);
	if (a >=0)
		{ if(b > 10)
			printf("B é muito grande\n");
		}
	else
		printf("A tem um valor negativo\n");
	
	return 0;
}