/*Leia 3 variáveis inteiras a, b e c e faça um "rodízio" entre elas. Ao final, a variável b deverá ter o
valor da variável a, a variável c deverá ter o valor da variável b e a variável a deverá ter o valor da
variável c.*/

#include<stdio.h>

void main()
{
    int a,b,c, temp;

    printf("a:");
    scanf("%d", &a);

    printf("b:");
    scanf("%d", &b);

    printf("c:");
    scanf("%d", &c);

    temp = a;
    a = c;
    c = b;
    b = temp;
}