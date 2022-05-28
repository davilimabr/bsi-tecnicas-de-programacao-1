/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. Faça um programa
para ler um número n inteiro de 4 dígitos e imprimir a primeira parte do número, a segunda parte e
o valor da multiplicação das partes*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int num, pt1, pt2, mult;

    printf("Digite um numero de 4 algarismos: ");
    scanf("%d", &num);

    pt1 = num / 100;
    pt2 = num % 100;

    mult = (parte1 + parte2) * (parte1 + parte2);

     printf("\nPrimeira parte: %d\nSegunda parte: %d\nValor da multiplicacao das partes: %d\n", parte1, parte2,mult);

}

