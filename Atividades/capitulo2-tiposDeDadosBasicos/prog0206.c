/*prog0206.c : Variáveis
 *AUTOR:       Lucas Deboni
 *DATA:        16/10/2020
 */
 #include <stdio.h>
 
 main()
 {
	 short idade;        /* pode ser short int ou apenas int */
	 int montante;
	 long n_conta;		/* pode ser long int ou long */
	 
	 printf("Qual a idade: "); scanf("%hd", &idade);
	 printf("Qual o montante a depositar: "); scanf("%d",&montante);
	 printf("Qual o nº de conta: "); scanf("%ld",&n_conta);
	 
	 printf("Uma pessoa de %hd anos depositou R$%d na conta %ld\n", idade, montante, n_conta);
 }