/*Capitulo5:   Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        14/12/2020
 */
#include <stdio.h>

long int num(int nHoras, char tipo)
{
  if(tipo == 'h')
    return nHoras;
  else if(tipo == 'm')
    return nHoras * 60;
  else
    return nHoras * 3600;
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