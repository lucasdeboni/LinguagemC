/*PROG0108.c : Significado dos caracteres especiais
 *AUTOR:       Lucas Deboni
 *DATA:        14/10/2020
 */
 
#include <stdio.h>
void main()
{
	printf("Programa qu apresenta os Caracteres Especiais\n\n");
	printf("\\n\t-\t<ENTER>\n"); /* Saída: \n 	-	 <ENTER> 	*/
	printf("\\\\\t-\t\\\n");	 /* Saída: \\	-		\		*/
	printf("\\t\t-\t<TAB>\n");	 /* Saída: \t	-	  <TAB>		*/
	printf("%%%%\t-\t%%\n");	 /* Saída: %%	-		%		*/
	puts("Hello World");
}