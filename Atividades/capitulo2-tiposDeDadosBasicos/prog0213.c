/*prog0213.c : Variáveis
 *Página: 52
 *AUTOR:       Lucas Deboni
 *DATA:        17/10/2020
 */
 
 #include <stdio.h>
 
 main()
 {
	 char ch;
	 printf("Introduza um Caractere: ");
	 scanf("%c", &ch);
	 printf("O caractere '%c' tem o ASCII nº %d\n", ch, (int) ch);
 }