/*Leia o valor de um produto e o percentual de desconto e exiba seu novo valor com o desconto e o
valor descontado*/

#include <stdio.h>
#include <math.h>

void main()
{
    float valorProduto, valorDesconto;
    int desconto;
    
    printf("Insira o valor do produto: \n");
    scanf("%f", &valorProduto);
    
    printf("Insira o desconto percentual a ser recebido: \n");
    scanf("%i", &desconto);
    
    valorDesconto = valorProduto * desconto / 100;
    
    printf("O valor do produto com o desconto aplicado é de: %.2f \n", valorProduto - valorDesconto);
    printf("O valor do desconto aplicado em reais é: %.2f", valorDesconto);
    
}
