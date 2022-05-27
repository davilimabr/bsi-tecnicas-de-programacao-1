/*Leia o comprimento e a largura de um terreno retangular, além do preço do metro de arame
farpado. Depois, calcule e imprima:
a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno será cercado com 4
voltas de arame farpado.
b) O custo total com o arame farpado*/

/*Como os problemas das questões 11 e 12 são parecidos, resolvi agrupar em um único programa com ambas funcionalidades*/

#include<stdio.h>

void main()
{
    float comprimento, largura, precoGrama, area, perimetro, precoArame;
    int voltas;

    printf("Digite o comprimento do terreno retangular: \n");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno retangular: \n");
    scanf("%f", &largura);

    printf("Digite o preco do metro quadrado da grama: \n");
    scanf("%f", &precoGrama);

    printf("Digite quantas voltas de arame no perimetro do terreno devem ser dadas: \n");
    scanf("%d", &voltas);

    printf("Digite o preco do metro do arame farpado: \n");
    scanf("%f", &precoArame);

    area = comprimento * largura;
    perimetro = comprimento * 2 + largura * 2;

    system("cls");
    printf("O terreno possui %.2f metros quadrados de area interna \n", area);
    printf("Custo total com grama: %.2f \n\n", area * precoGrama);
    printf("Para realizar %d voltas, serao gastos %.2f metros de arame farpado... \n", voltas, perimetro * voltas);
    printf("Custo total com arame farpado: %.2f", perimetro*voltas*precoArame);
}