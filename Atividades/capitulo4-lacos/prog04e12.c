/*prog04e12.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        10/12/2020
 */
#include <stdio.h>

int main()
{
	int n1, n2, aux;
	
	printf("Insira dois números entre 0 e 255: "); scanf("%d%d",&n1,&n2);

	if(n1>n2)
	  {
		  aux=n1;
		  n1=n2;
		  n2=aux;
	  }

	for(;n1 <= n2; n1++)
	  printf("%d --> %c\n", n1, (char)n1);		
}