/*prog0509.c : Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        14/12/2020
 */
#include <stdio.h>

int isDigit(char);

int main()
{
    char c;
    while(1)
      {
        c=getchar();
        if(!isDigit(c))
          putchar(c);
      }
    return 0;
}

int isDigit(char ch)
{
  return (ch >='0' && ch<='9');
}