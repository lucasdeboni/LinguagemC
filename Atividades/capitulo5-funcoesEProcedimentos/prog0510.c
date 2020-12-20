/*prog0510.c : Funções e Prodedimentos
 *AUTOR:       Luis Damas
 *DATA:        14/12/2020
 */
#include <stdio.h>

int xToUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
      return ch + 'A' - 'a';
    else
      return ch;
}

main()
{
    char c;
    while(1)
      {
          c=getchar();
          putchar(xToUpper(c));
      }
}