/*Leia o raio de uma esfera, calcule e imprima seu volume*/

#include <stdio.h>
#include <math.h>

void main()
{
    float raio, volume;
    
    printf("Insira o raio da esfera: \n");
    scanf("%f", &raio);
    
    volume = 4.0/3 * M_PI * pow(raio, 3);
    
    printf("O volume da esfera: %f", volume);

}
