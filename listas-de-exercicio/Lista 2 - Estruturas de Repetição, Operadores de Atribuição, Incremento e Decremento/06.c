/*Leia o valor do salário de uma pessoa e o valor de um financiamento pretendido. Caso o
financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá imprimir
"Financiamento Concedido"; senão, ele deverá imprimir "Financiamento Negado".
*/
#include<stdio.h>

int main(void){
    float salario, financiamento;

    puts("Salario:");
    scanf("%f", &salario);

    puts("Financiamento:");
    scanf("%f", &financiamento);

    if(financiamento <= salario * 5)
        puts("financiamento concedido");
    else
        puts("financiamento negado");
}