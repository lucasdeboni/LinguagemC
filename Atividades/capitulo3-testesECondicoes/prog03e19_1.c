/*prog03e19_1.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        27/11/2020
 */
#include <stdio.h>

int main()
{
	int mes, qtdDias;
	
	printf("Digite o mês :" ); scanf(" %d", &mes);
	
	if( mes == 2 )
		qtdDias = 28;
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 )
			qtdDias = 30;
		else
			qtdDias = 31;
		
	printf("O mês %d tem %d dias.\n", mes, qtdDias);
	
	return 0;
}