/*Leia o comprimento e a largura de um terreno retangular, além do preço do metro quadrado de
grama. Depois, calcule e imprima:
a) A área a ser coberta de grama.
b) O custo total de grama para gramar o terreno.*/

#include<stdio.h>

void main()
{
    float comprimento, largura, precoGrama, area;

    printf("Digite o comprimento do terreno retangular: \n");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno retangular: \n");
    scanf("%f", &largura);

    printf("Digite o preco do metro quadrado da grama: \n");
    scanf("%f", &precoGrama);

    area = comprimento * largura;

    printf("A area total do terreno retangular e: %.2f \n", area);
    printf("Para revestir todo a area do terreno com grama, sera gasto um total de %.2f reais", area * precoGrama);
}