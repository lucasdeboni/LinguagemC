/*Capitulo5:   Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        17/12/2020
 */
#include <stdio.h>
int is_special(int x)
{
  return 2*x==x*x;
}

int main()
{
    int n1;

    printf("Digite um úmero: "); scanf("%d", &n1);

    if(is_special(n1))
      printf("O dobro do número %d é igual a %d².\n", n1,n1);
    else
      printf("O dobro do número %d não é igual a %d².\n", n1,n1);

    return 0;
}