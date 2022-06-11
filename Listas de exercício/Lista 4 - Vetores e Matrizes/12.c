/*Leia a matrícula e o salário de 10 funcionários. Calcule o novo salário de todos os funcionários
sabendo que o reajuste é de 8%. Ao final, exiba uma lista de funcionários com suas matrículas e
novos salários.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matricula[10];
    float salario[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("digite a matricula do funcionário %d\n", i + 1);
        scanf("%d", &matricula[i]);
        printf("digite o salario do funcionário %d\n", i + 1);
        scanf("%f", &salario[i]);
    }

    for(i = 0; i < 10; i++){
        salario[i] *= 1.08;
    }

    for(i = 0; i < 10; i++){
        printf("funcionario: %d   -   %.2f\n", matricula[i], salario[i]);
    }
}