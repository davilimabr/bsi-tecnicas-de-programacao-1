/*Leia uma temperatura em graus Celsius e converta-a em graus Fahrenheit*/

#include <stdio.h>
#include <math.h>

void main()
{
    float grausC, grausF;
    
    printf("Insira a temperatura em graus Celsius: \n");
    scanf("%f", &grausC);
    
    grausF = 32 + ((212.0f - 32) / 100 * grausC); 
    
    printf("A temperatura em Fahrenheit é: %.2f", grausF);
}
