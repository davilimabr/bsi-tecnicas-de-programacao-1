/*Leia o lado de um cubo, calcule e imprima seu volume.*/

#include <stdio.h>
#include <math.h>

void main()
{
    float peso, altura, imc;
    
    printf("Insira seu peso em kg: \n");
    scanf("%f", &peso);
    
    printf("Insira sua altura em metros: \n");
    scanf("%f", &altura);
    
    imc = peso / (pow(altura, 2));
    
    printf("O seu imc é: %f \n", imc);
    
}
