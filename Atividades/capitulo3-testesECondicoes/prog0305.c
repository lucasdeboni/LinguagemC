/*prog0305.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        19/10/2020
 */
#include <stdio.h>
 
main()
{
	int x, y, tmp;
	printf("Introduza dois nºs: ");
	scanf("%d %d", &x, &y);
	if (x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
	printf("%d %d\n",x, y);
}