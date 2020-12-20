/*prog0316.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        25/10/2020
 */
#include <stdio.h>

main()
{
	int num1, num2, res=0;
	char op;
	
	printf("Escreva um Expressão: ");
	scanf("%d %c %d", &num1, &op, &num2);
	switch(op)
	{
		case '+' : res = num1 + num2; break;
		case '-' : res = num1 - num2; break;
		case '*' :
		case 'x' :
		case 'X' : res = num1 * num2; break;
		
		case '/' :
		case '\\':
		case ':' : res = num1/num2; break;
	}
	printf("%d %c %d = %d \n", num1, op, num2, res);
}