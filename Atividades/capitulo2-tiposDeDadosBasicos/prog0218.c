/*prog0218.c : Variáveis
 *AUTOR:       Lucas Deboni
 *DATA:        18/10/2020
 */
 
 #include <stdio.h>
 
 main()
 {
	 long int nSegundos;
	 printf("Introduza o Nº de segundos: ");
	 scanf("%ld", &nSegundos);
	 printf("Horas    : %d\n", (int) nSegundos/3600);
	 printf("Minutos  : %d\n", (int) (nSegundos%3600/60));
	 printf("Segundos : %d\n", (int) nSegundos % 60);
 }