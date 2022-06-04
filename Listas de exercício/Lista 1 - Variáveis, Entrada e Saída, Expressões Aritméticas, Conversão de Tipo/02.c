/*Leia o lado de um cubo, calcule e imprima seu volume.*/

#include <stdio.h>
#include <math.h>

void main()
{
    float base, altura, area;
    
    printf("Insira a base de um triangulo:\n");
    scanf("%f",&base);
    
    printf("Insira a altura de um triangulo:\n");
    scanf("%f",&altura);
    
    area = base * altura / 2;
    
    printf("A área do triangulo o é: %f", area);
}
