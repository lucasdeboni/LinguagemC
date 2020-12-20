/*prog03e17.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	int x;
	
	printf("Digite um número: ");
	scanf("%d", &x);
	switch(x)
	{
		case 0: printf("%d é zero\n",x); break;
		default : printf("%d não é zero\n",x);
	}
}