/*
Uma empresa classifica seus funcionários de acordo com um índice de produtividade: (1)
Excelente, (2) Bom e (3) Regular. Cada nível acrescenta um abono ao salário base do funcionário
de acordo com o seguinte:
• Excelente: 40% do salário base
• Bom: 20% do salário base
• Regular: 5% do salário base
Faça um programa que permita a entrada da matrícula, do salário base e o índice de produtividade
de vários funcionários, até o usuário digitar matrícula zero ou negativa. Para cada funcionário
imprima a sua matrícula e seu novo salário.
*/
#include<stdio.h>
#include<stdlib.h>

int main(int){
    int matricula, produtividade;
    float salario, novo_salario;

    while(true){
        puts("matricula:\n");
        scanf("%d", &matricula);

        if(matricula < 1)
            break;

        do{
            puts("salario:\n");
            scanf("%f", &salario);
        }while(salario < 1);

        float aumento = 0;
        do{
            puts("produtividade (1 - excelente | 2 - bom | 3 - regular):\n");
            scanf("%d", &produtividade);

            if(produtividade == 1)
                aumento = 1.4;
            else if(produtividade == 2)
                aumento = 1.2;
            else if(produtividade == 3)
                aumento = 1.05;

        }while(aumento == 0);
       
        system("cls");

        novo_salario = salario * aumento;
        printf("matricula: %d\nnovo salario: %.2f\n\n", matricula, novo_salario);
    }
}