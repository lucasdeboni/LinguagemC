/*prog03e19_3.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        27/11/2020
 */
#include <stdio.h>

int main()
{
	int mes, qtdDias;
	
	printf("Digite o mês :" ); scanf(" %d", &mes);
	switch(mes)
	{
		case 1:  /* 31 dias */
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: qtdDias += 1;
		case 4:  /* 30 dias */
		case 6:
		case 9:
		case 11: qtdDias += 2;
		default: qtdDias += 28;
	}
		
	printf("O mês %d tem %d dias.\n", mes, qtdDias);
	
	return 0;
}