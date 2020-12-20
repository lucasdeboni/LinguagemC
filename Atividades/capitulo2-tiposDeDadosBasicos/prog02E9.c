/*prog02E9.c : Variáveis
 *AUTOR:       Lucas Deboni
 *DATA:        18/10/2020
 */
 #include <stdio.h>
 
 int main()
 {
	 int ano, mes, dia;
	 
	 printf("Digite uma data (Formato mm-dd-aaaa): ");
	 scanf("%d-%d-%d",&mes, &dia, &ano);
	 printf("A data no formato dd/mm/aaaa eh %d/%d/%d", dia, mes, ano);
 }