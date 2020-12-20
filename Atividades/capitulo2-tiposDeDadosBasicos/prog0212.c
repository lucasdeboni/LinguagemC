/*prog0212.c : Variáveis
 *Página: 50
 *AUTOR:       Lucas Deboni
 *DATA:        17/10/2020
 */
 #include <stdio.h>
 
 main ()
 {
	 char ch1, ch2;
	 printf("Introduza um Caractere: ");
	 scanf("%c", &ch1);
	 printf("Introduza outro Caractere: ");
	 scanf(" %c", &ch2);
	 printf("Os caracteres introduzidos foram '%c' e '%c'\n",ch1, ch2);
 }