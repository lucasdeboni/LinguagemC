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
		  case 'm':
		  case 'M': res = n_horas<0 ? 0 : n_horas ¨* 60L;
					break;
		  case 's':
		  case 'S': res = n_horas<0 ? 0 : n_horas ¨* 3600L;
					break;
		  case 'd':
		  case 'D': res = n_horas<0 ? 0 : n_horas ¨* 36000L;
					break;
		  
	  }
	printf("%dh --> %ld%c \n", nHoras, res, tipo);
}