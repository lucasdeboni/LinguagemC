/*prog0304.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        19/10/2020
 */
 #include <stdio.h>
 
 main()
 {
	 float salario;
	 printf("Qual o Salário ");
	 scanf("%f", &salario);
	 if (salario < 100000)
		 salario += 1000;
	 printf("Salário Final: %.2f\n", salario);
 }