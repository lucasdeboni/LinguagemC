/*prog0219.c : Variáveis
 *AUTOR:       Lucas Deboni
 *DATA:        18/10/2020
 */
 #include <stdio.h>
 
 main()
 {
	 float x;
	 printf("Introduza um Nº real: ");
	 scanf("%f", &x);
	 printf("Parte Inteira      : %d\n", (int) x);
	 printf("Parte Fracionaria  : %f\n", x - ((int) x));
 }