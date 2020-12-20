/*Capitulo5:   Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        17/12/2020
 */
#include <stdio.h>
int isSquare(int x, int y)
{
  return x==y*y;
}

int main()
{
    int n1,n2;

    printf("Digite dois números: "); scanf("%d%d", &n1,&n2);

    if(isSquare(n1,n2))
      printf("O número %d é igual a %d².\n", n1,n2);
    else
      printf("O número %d não é igual ao %d².\n", n1,n2);

    return 0;
}