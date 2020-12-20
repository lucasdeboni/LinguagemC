/*prog0318.c : Testes e Condições
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
	switch(tipo)
	  {
		  case 'm':
		  case 'M': res = nHoras < 0 ? 0 : nHoras * 60L; break;
		  
		  case 's':
		  case 'S': res = nHoras < 0 ? 0 : nHoras * 3600L; break;
		  
		  case 'd':
		  case 'D': res = nHoras < 0 ? 0 :  nHoras * 36000L; break;
	  }
	printf("%dh --> %ld%c \n", nHoras, res, tipo);
}