/*prog0416_2.c : Testes e Condições
 *AUTOR:       Lucas Deboni
 *DATA:        07/12/2020
 */
#include <stdio.h>

int main(){
    int i, num;
    printf("Introduza um N° : "); scanf("%d",&num);
    
    /*for(i=1; num>=1; i++)
        printf("%2d %2d\n", i, num--);
    */

   for(i=1; i<=num; i++)
    printf("%3d %3d\n",i,num-i+1);
}