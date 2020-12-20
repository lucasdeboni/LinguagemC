/*prog04e10.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        10/12/2020
 */
#include <stdio.h>

int main()
{
	int n;
	do{
		printf("Insira um número entre 1 e 100: ");
		scanf("%d",&n);
	}while( n<1 || n>100 );
	printf("Você inseriu o número %d.\n", n);
}