/*
. Sabendo que um caixa eletrônico possui notas de R$ 10, R$ 20, R$ 50 e R$ 100, leia um valor que
representa a quantidade de dinheiro que o cliente deseja sacar e imprima a quantidade necessária de
cada uma dessas notas para formar o valor desejado. A quantidade total de notas deve ser a mínima
possível. Assuma que a quantidade fornecida pelo cliente é sempre múltipla de 10.
*/

#include<stdio.h>

int main(void)
{
    int valor, nota100, nota50, nota20, nota10;
    nota100 = nota50 = nota20 = nota10 = 0;

    puts("Digite o valor q deseja sacar: ");
    scanf("%d", &valor);

    int sobra = valor;

    if(valor >= 100){
        nota100 = sobra/100;
        sobra = sobra % 100;
    }

    if(valor >= 50){
        nota50 = sobra/50;
        sobra = sobra % 50;
    }
    
    if(valor >= 20){
        nota20 = sobra/20;
        sobra = sobra % 20;
    }  
    
    if(valor >= 10){
        nota10 = sobra/10;
        sobra = sobra % 10;
    }      
    printf("Quantidade de notas necessárias: \n R$100: %d \n R$50: %d \n R$20: %d \n R$10: %d", nota100, nota50, nota20, nota10);
}