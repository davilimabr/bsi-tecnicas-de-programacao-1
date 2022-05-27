/*Leia a e b e calcule a equação do 1º grau ax + b = 0, imprimindo o valor de x. Considere a
diferente de zero.*/

#include<stdio.h>

void main()
{
    float a, b, x;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    x = -b / a;

    printf("x: %.2f", x);
}