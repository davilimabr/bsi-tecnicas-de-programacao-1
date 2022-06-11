/*
Um endocrinologista deseja controlar a saúde de seus pacientes e, para isto, utiliza o índice de
massa corporal (IMC). Sabendo-se que o IMC é calculado através da fórmula:
IMC = peso/altura2
Leia o peso (Kg) e altura (metros) de um paciente e exiba sua faixa de risco, baseando-se na
seguinte tabela.

IMC Faixa de risco
Abaixo de 20            Abaixo do peso
Acima de 20 até 25      Normal
Acima de 25 até 30      Excesso de peso
Acima de 30 até 35      Obesidade
Acima de 35             Obesidade mórbida
*/

#include<stdio.h>

int main(void){
    float imc, altura, peso;

    puts("Insira sua altura e peso");

    puts("Altura (m):");
    scanf("%f", &altura);

    puts("Peso (kg):");
    scanf("%f", &peso);

    imc = peso / (altura * altura);  

    if(imc < 20)
        puts("Abaixo do peso");
    else if(imc > 20 && imc <= 25)
        puts("Normal");
    else if(imc > 25 && imc <= 30)
        puts("Excesso de peso");
    else if(imc > 30 && imc <= 35)
        puts("Obesidade");
    else 
        puts("Obesidade mórbida");
}