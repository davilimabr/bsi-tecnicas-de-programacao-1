/*. Leia um número inteiro a com 4 dígitos e calcule outro número inteiro b que deverá ser o número a
invertido. Exemplo: se a = 5732 então b = 2375*/

#include<stdio.h>

int main(void)
{
    int num, alg1, alg2, alg3, alg4;

    printf("Insira um numero de 4 algarismos para ter seus algarismos invertidos: \n");
    scanf("%d", &num);

    alg1 = num / 1000;
    alg2 = num % 1000 / 100;
    alg3 = num % 1000 % 100 / 10;
    alg4 = num % 1000 % 100 % 10;

    printf("Numero invertido: %d%d%d%d\n", alg4, alg3, alg2, alg1);

}