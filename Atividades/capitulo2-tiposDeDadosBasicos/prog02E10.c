/*prog02E10.c : Variáveis
 *AUTOR:       Lucas Deboni
 *DATA:        18/10/2020
 */
 #include <stdio.h>
 
 int main()
 {
	 int ano, mes, dia;
	 
	 printf("Digite uma data aaaa-mm-dd: ");
	 scanf("%d-%d-%d",&ano, &mes, &dia);
	 printf("A data no formato dd/mm/aaaa eh %d/%d/%d", dia, mes, ano);
 }