/*Capitulo5:   Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        14/12/2020
 */
#include <stdio.h>

long int nSegundos(int nHoras)
{
  return nHoras * 3600;
}

int main()
{
    int nHoras;

    printf("Digite a quantidade de horas: "); scanf("%d", &nHoras);
    printf("%d Horas tem %ld segundos", nHoras, nSegundos(nHoras));

    return 0;
}