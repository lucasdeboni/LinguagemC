/*prog03e20.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        27/11/2020
 */
#include <stdio.h>

int main()
{
	int dia, mes, ano, qtdDias;
	
	printf("Escreva uma data [dd/mm/AAAA]: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	switch(mes)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: qtdDias += 1;
			case 4:
			case 6:
			case 9:
			case 11: qtdDias += 2;
			default: qtdDias += 28;
		}
		
	if(mes == 2 && ((ano%4 == 0 && ano%100!=0) || ano%400==0))
		qtdDias+= 1;
	
	if(dia < 0 || dia > qtdDias || mes < 1 || mes > 12)
		printf("Data Inválida\n");
	else
		printf("Data %d/%d/%d válida\n", dia, mes, ano);
}