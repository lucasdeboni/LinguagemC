/*prog0416.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        07/12/2020
 */
#include <stdio.h>

int main(){
    int i, j, num;
    printf("Introduza um N° : "); scanf("%d",&num);
    
    for(i=1, j=num; i<=num; i++, j--)
        printf("%2d %2d\n", i, j);
}