/*Calcule e imprima o volume de um cilindro que será enchido de água para um espetáculo de
mágica. Para isso, seu programa deverá ler o raio e a altura do cilindro.*/

#include <stdio.h>
#include <math.h>

void main()
{
    float raio, altura, volume;

    printf("Insira o raio da base do cilindro: \n");
    scanf("%f", &raio);

    printf("Insira a altura e do cilindro: \n");
    scanf("%f", &altura);

    volume = M_PI * pow(raio, 2) * altura;

    printf("O volume do cilindro e: %.2f", volume);

}
