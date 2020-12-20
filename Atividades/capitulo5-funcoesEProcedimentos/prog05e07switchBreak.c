/*Capitulo5:   Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        14/12/2020
 */
#include <stdio.h>

long int num(int nHoras, char tipo)
{
  long int resultado;
  switch (tipo)
  {
  case 'm': resultado = nHoras * 60; break;
  case 's': resultado = nHoras * 3600; break;
  default: resultado = nHoras;
  }

  return resultado;
}

int main()
{
    int n;
    char ch;

    printf("Digite a quantidade de horas: "); scanf("%d", &n);
    printf("Digite a unidade de medida horas (h) minutos(m) segundos(s): "); scanf(" %c", &ch);

    printf("%dh --> %ld %c", n, num(n, ch), ch);

    return 0;
}