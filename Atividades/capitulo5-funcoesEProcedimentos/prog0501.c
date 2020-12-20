/*prog0504.c : Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        14/12/2020
 */
#include <stdio.h>

linha3x()
{
    int i;
    for(i=1; i<=3; i++)
      putchar('*');
    putchar('\n');
}

linha5x()
{
    int i;
    for(i=1; i<=5; i++)
      putchar('*');
    putchar('\n');
}

linha7x()
{
    int i;
    for(i=1; i<=7; i++)
      putchar('*');
    putchar('\n');
}


int main()
{
    linha3x();
    linha5x();
    linha7x();
    linha5x();
    linha3x();

    return 0;
}