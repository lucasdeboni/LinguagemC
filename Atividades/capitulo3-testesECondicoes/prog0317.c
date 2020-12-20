/*prog0317.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	int nHoras;
	long nSeg;
	
	printf("Nº de Horas: "); scanf("%d", &nHoras);
	nSeg = nHoras < 0 ? 0 : nHoras * 3600L;
	printf("%d Horas tem %ld segundos\n", nHoras, nSeg);
}