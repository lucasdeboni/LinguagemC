/*prog0301.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        19/10/2020
 */
 
 #include <stdio.h>
 
 main()
 {
	 int x, y;
	 printf("Introduza 2 inteiros: ");
	 scanf("%d%d", &x, &y);
	 printf("O Resultado de %d == %d : %d\n", x,y,x==y);
	 printf("O Resultado de %d >  %d : %d\n", x,y,x>y);
	 printf("O Resultado de %d >= %d : %d\n", x,y,x>=y);
	 printf("O Resultado de %d <  %d : %d\n", x,y,x<y);
	 printf("O Resultado de %d <= %d : %d\n", x,y,x<=y);
	 printf("O Resultado de %d != %d : %d\n", x,y,x!=y); 
	 
 }