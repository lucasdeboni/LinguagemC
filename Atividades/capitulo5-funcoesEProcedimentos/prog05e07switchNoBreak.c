/*Capitulo5:   Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        14/12/2020
 */
#include <stdio.h>

long int num(int nHoras, char tipo)
{
  long int resultado = (long int)nHoras;
  switch (tipo)
  {
    case 's': resultado *= 60L;
    case 'm': resultado *= 60L;
  }

  return resultado;
}

int main()
{
    int n;
    char ch;

    printf("Digite a quantidade de horas: "); scanf("%d", &n);
    printf("Digite a unidade de medida horas (h) minutos(m) segundos(s): ");
    scanf(" %c", &ch);

    printf("\n%dh --> %ld %c", n, num(n, ch), ch);

    return 0;
}