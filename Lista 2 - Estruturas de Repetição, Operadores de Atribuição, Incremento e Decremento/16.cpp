/*Leia a nota de um aluno e transforme-a em um conceito. As notas 10,0 a 9,0 receberão conceito A,
as notas de 8,9 a 7,0 receberão conceito B, as notas de 6,9 a 5,0 receberão conceito C e abaixo de
5,0 conceito D. Caso a nota seja inválida, imprima “Inválida”.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    float nota;

    puts("Insira a nota");
    scanf("%f", &nota);

    if(nota >= 9 && nota <= 10)
        puts("conceito A");
    else if (nota >= 7 && nota < 9)
        puts("conceito B");
    else if (nota >= 5 && nota < 7)
        puts("conceito C");
    else if(nota >= 0 && nota < 5) 
        puts("conceito D");
    else 
        puts("inválida");
}