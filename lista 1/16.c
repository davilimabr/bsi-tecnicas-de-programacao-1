/*Leia um número real x e imprima seu valor arredondado. Por exemplo: se x = 3.2 imprimir 3, e se x
= 3.5 ou maior imprimir 4.*/

#include<stdio.h>
#include<math.h>

void main()
{
    float x;

    printf("digite um valor decimal x:");
    scanf("%f", &x);

    printf("%f", round(x));
}