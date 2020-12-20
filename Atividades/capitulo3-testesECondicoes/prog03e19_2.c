/*prog03e19_2.c : Testes e Condições
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
		case 2: qtdDias = 28;
				break;
		
		case 4:
		case 6:
		case 9:
		case 11: qtdDias = 30;
				 break;
				 
		default: qtdDias = 31;
	}
		
	printf("O mês %d tem %d dias.\n", mes, qtdDias);
	
	return 0;
}