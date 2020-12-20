/*prog0510.c : Funções e Prodedimentos
 *AUTOR:       Luis Damas
 *DATA:        14/12/2020
 */
#include <stdio.h>

float Pot(float x, int n)
{
  float res;
  int i;

  for (i=1, res=1.0; i<=n; i++)
    res*=x;

  return res;
}

int main()
{
    float x;
    int n;

    printf("Digite o numerador e a potencia: "); scanf("%f%d",&x,&n);
    printf("A potência de %.2f elevado a %d é: %.2f",x,n,Pot(x,n));

    return 0;
}