/*prog0303.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        19/10/2020
 */
 #include <stdio.h>
 
 main()
 {
	int x;
	printf("Introduza um Nº ");
	scanf("%d", &x);
	if (x) /* em vez de if (x!=0) porém perde a legibilidade */
		printf("%d não é zero!!!\n",x);
	else
		printf("%d é igual a zero!!!\n",x);
 }