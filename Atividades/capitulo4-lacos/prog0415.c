/*prog0415.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        27/11/2020
 */
#include <stdio.h>

int main(){
    int i;
    for(i = 0; i<=255; i++)
        printf("%3d -> %c\n",i, (char) i);
}