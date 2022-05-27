/*Leia o lado de um cubo, calcule e imprima seu volume.*/

#include <stdio.h>
#include <math.h>

void main()
{
    int lado, volume;
    
    printf("Insira o lado de um cubo:\n");
    scanf("%i",&lado);
    
    volume = pow(lado, 3);
    
    printf("O volume do cubo é: %i", volume);
}
