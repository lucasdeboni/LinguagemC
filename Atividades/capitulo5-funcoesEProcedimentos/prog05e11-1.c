/*Capitulo5:   Funções e Prodedimentos
 *AUTOR:       Lucas Deboni
 *DATA:        16/12/2020
 */
#include <stdio.h>

int isdigit(char c)
{
  return (c >= '0' && c <= '9');
}

int isalpha(char c)
{
  return (c >= 'a' && c <= 'z' ||
          c >= 'A' && c <= 'Z');
}

int isalnum(char c)
{
  return (isdigit(c) || isalpha(c));
  /*return ((c >= 'a' && c <= 'z' ||
           c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9'));*/
}

int islower(char c)
{
  return c >= 'a' && c <= 'z';
}

int isupper(char c)
{
  return c >= 'A' && c <= 'Z';
}

int isspace(char c)
{
  return c == ' ' || c == '\t';
}

char tolower(char c)
{
  if(isupper(c))
    return c + 'a' - 'A';
  else
    return c;
}

char toupper(char c)
{
  if(islower(c))
    return c + 'A' - 'a';
  else
    return c;
}

int main()
{
    int opcao;
    char c;

    do{
      printf("-------------- M E N U --------------------- \n");
      printf("1 - Verifica se o caracter é dígito.\n");
      printf("2 - Verifica se o caracter é letra.\n");
      printf("3 - Verifica se o caracter é letra ou número.\n");
      printf("4 - Verifica se o caracter é letra minúscula.\n");
      printf("5 - Verifica se o caracter é letra MAÍSCULA.\n");
      printf("6 - Verifica se o caracter é espaço ou <TAB>.\n");
      printf("7 - Transforma em letra minúscula.\n");
      printf("8 - Transforma em letra MAÍSCULA.\n");
      printf("0 - Sair.\n");
      printf("Digite a opção: "); scanf("%d",&opcao);

      if(opcao)
      {
        printf("Digite o caracter: "); scanf(" %c", &c);
        putchar('\n');

        switch(opcao)
          {
            case 1: if(isdigit(c))
                      printf("O caracter '%c' é um número.\n",c);
                    else
                      printf("O caracter '%c' não é um número.\n",c);
                    break;
            case 2: if(isalpha(c))
                      printf("O caracter '%c' é uma letra.\n",c);
                    else
                      printf("O caracter '%c' não é uma letra.\n",c);
                    break;
            case 3: if(isalnum(c))
                      printf("O caracter '%c' é uma letra ou um número.\n",c);
                    else
                      printf("O caracter '%c' não é uma letra ou um número.\n",c);
                    break;
            case 4: if(islower(c))
                      printf("O caracter '%c' é uma letra minúscula.\n",c);
                    else
                      printf("O caracter '%c' não é uma letra minúscula.\n",c);
                    break;
            case 5: if(isupper(c))
                      printf("O caracter '%c' é uma letra MAÚSCULA.\n",c);
                    else
                      printf("O caracter '%c' não é uma letra MAÚSCULA.\n",c);
                    break;
            case 6: if(isspace(c))
                      printf("O caracter '%c' é um espaço ou um <TAB>.\n",c);
                    else
                      printf("O caracter '%c' não é um espaço ou um <TAB>.\n",c);
                    break;
            case 7: printf("O caracter '%c' virou '%c'.\n", c, tolower(c));
                    break;
            case 8: printf("O caracter '%c' virou '%c'.\n",c, toupper(c));
                    break;
            default: printf("Opção inválida, tente novamente.\n");
          }
          printf("\n\n\n");
      }
    }while(opcao);

    return 0;
}