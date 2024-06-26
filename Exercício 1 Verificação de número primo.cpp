/* 
 * arquivo: primo1.c
 * --------------------
 * Este programa verifica se um dado numero inteiro positivo  n 
 * é primo 
 */


#include <stdio.h>

int main()
{
    int n,			/* numero a ser lido e testado */
     d,				/* candidato a divisor */
     EhPrimo;			/* para indicar se o numero dado n 'e primo ou nao     */
	/* Convencao: EhPrimo = 1 se o numero dado 'e primo */
	/*  EhPrimo = 0 se o numero dado nao 'e primo       */
   

    d = 2;
    EhPrimo = 1;		/* Ate' prova em contrario, supomos que n seja  primo */

    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);

    if (n <= 1)
	EhPrimo = 0;

    while (EhPrimo == 1 && d <= n / 2) {
	if (n % d  == 0)
	    EhPrimo = 0;
	d = d + 1;
    }

    if (EhPrimo == 1)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);

    return 0;
}