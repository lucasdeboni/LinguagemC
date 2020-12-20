/*prog04e08.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        10/12/2020
 */
#include <stdio.h>

int main()
{
	int n,i,j;
	
	printf("Quantos ramos vc quer?: "); scanf("%d",&n);
	for(i=1; i<=n;i++)
	  {
		  for(j=1; j<=i; j++)
		  	putchar('*');
		putchar('\n');
	  }
}