/*prog0320.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	int nHoras;
	long res;
	char tipo;
	
	printf("Nº de Horas: "); scanf("%d", &nHoras);
	printf("O que Mostrar (m/s/d): "); scanf(" %c", &tipo);
	res = nHoras;
	switch(tipo)
	  {
		  case 'd':
		  case 'D': res = res * 10;
		  case 's':
		  case 'S': res = res * 60;
		  case 'm':
		  case 'M': res = res * 60;
	  }
	printf("%dh --> %ld%c \n", nHoras, res, tipo);
}