/*Leia dois inteiros x e y e imprima o maior múltiplo de x menor ou igual a y. Exemplo: se x = 9 e y
= 38, então o resultado é 36*/

#include<stdio.h>

void main()
{
    int x, y, maiorMulti;

    printf("Digite dois numeros x e y:");
    scanf("%d %d", &x, &y);

    int i;
    for(i=y;i>=0;i--)
    {
        if(i % x == 0)
        {
            maiorMulti = i;
            break;
        }
    }

    printf("maior multiplo de x menor q y : %d", maiorMulti);

    
}