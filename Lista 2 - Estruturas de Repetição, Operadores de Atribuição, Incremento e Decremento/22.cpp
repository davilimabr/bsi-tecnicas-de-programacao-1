/*
Leia o número de horas trabalhadas e o valor da hora de um trabalhador e imprima o salário bruto e
líquido, sabendo que o salário líquido é igual ao salário bruto menos o IR. O desconto do IR segue
as seguintes regras:
• Salário bruto menor ou igual a R$ 1900,00: desconto ZERO
• Salário bruto maior que R$1900,00 e menor ou igual a R$ 4300,00: desconto de 10%
• Salário bruto maior que R$4300,00 e menor ou igual a R$ 5800,00: desconto de 15%
• Salário bruto maior que R$5800,00: desconto de 27,5%
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float salario_b, salario_l, horas_trab, v_horas_trab;

    puts("Insira a quantidade de horas trabalhadas e o valor por hora");
    
    puts("Horas (quantidade):");
    scanf("%f", &horas_trab);
    
    puts("Valor horas:");
    scanf("%f", &v_horas_trab);

    salario_b = horas_trab * v_horas_trab;

    if(salario_b > 1900 && salario_b <= 4300)
        salario_l = salario_b * 0.9;
    else if(salario_b > 4300 && salario_b <= 5800)
        salario_l = salario_b * 0.85;
    else if(salario_b > 5800)
        salario_l = salario_b * 0.725;
    else 
        salario_l = salario_b;

    printf("Salário líquido: %.2f", salario_l);
}