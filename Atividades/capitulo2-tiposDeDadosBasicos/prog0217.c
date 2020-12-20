/*prog0217.c : Variáveis
 *AUTOR:       Lucas Deboni
 *DATA:        18/10/2020
 */
 #include <stdio.h>
 
 main()
 {
	 int a, b;
	 printf("Introduza dois Inteiros: ");
	 scanf("%d%d", &a, &b);
	 printf("%d + %d = %d\n", a, b, a+b);
	 printf("%d - %d = %d\n", a, b, a-b);
	 printf("%d * %d = %d\n", a, b, a*b);
	 printf("%d / %d = %d\n", a, b, a/b);
	 printf("%d %% %d = %d\n", a, b, a%b);
 }