/*Calcule e imprima o salário semanal de uma pessoa, determinado pelas seguintes condições: se o
número de horas trabalhadas for de até 40h, a pessoa recebe R$15,00 por hora, senão a pessoa
recebe R$600,00 mais R$21,00 para cada hora trabalhada acima de 40h.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float salario, horas_trab;

    puts("Quantidade de horas trabalhadas");
    scanf("%f", &horas_trab);

    if(horas_trab <= 40)
        salario = horas_trab * 15;
    else
        salario = 600 + (horas_trab - 40) * 21;

    printf("Salario semanal de %.2f", salario);
}