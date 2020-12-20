/*prog04e11.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        10/12/2020
 */
#include <stdio.h>

int main()
{
	int n, i;
	char c;
	for(n=0; n<=255; n++)
	  {
		printf("%d --> %c\n",n, (char)n);
		if(n%20 == 0 && n!=0)
		  {
			do{
				printf("Para continuar aperte a tecla C e <ENTER>..."); scanf(" %c", &c);
			}while(c != 'c' && c != 'C');
		  }	
	  }
			
}