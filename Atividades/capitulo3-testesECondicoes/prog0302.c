/*prog0302.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        19/10/2020
 */
 #include <stdio.h>
 
 main()
 {
	 int x;
	 printf("Introduza um Nº ");
	 scanf("%d", &x);
	 if(x >= 0)
		 printf("Número Positivo\n");
	 else
		 printf("Número Negativo\n");
 }