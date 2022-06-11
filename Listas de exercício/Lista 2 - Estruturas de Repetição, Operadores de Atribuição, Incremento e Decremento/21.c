/*Leia o preço de um produto e a condição de pagamento e imprima os valores a serem pagos,
considerando a seguinte tabela:

Condição Pagamento Saída
À vista, dinheiro ou cheque, 10% de desconto  Valor a ser pago
À vista, cartão de crédito, 5% de desconto    Valor a ser pago
Em 2 vezes, preço normal sem juros            Valor de cada parcela e valor total
Em 3 vezes, preço normal + 10% juros          Valor de cada parcela e valor total
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int forma_pag;
    float valor;

    puts("Valor do produto:");
    scanf("%f", &valor);
    
    do{
        puts("Forma de pagamento (1 - dinheiro ou cheque | 2 - cartão de crédito):");
        scanf("%d", &forma_pag);
    }
    while(forma_pag != 1 && forma_pag != 2);
        
    float valor_pagar;
    
    if(forma_pag == 1){
        valor_pagar = valor * 0.9;
        printf("O valor a pagar será de %2.f", valor_pagar);
    }
    else{

        int forma_cartao;

        do{
            puts("Parcelado ou à vista? (1 - à vista | 2 - parcelado)");
            scanf("%d", &forma_cartao);
        }
        while(forma_cartao != 1 && forma_cartao != 2);
        
        if(forma_cartao == 1){
            valor_pagar = valor * 0.95;
            printf("O valor a pagar será de %2.f", valor_pagar);
        }
        else{
            int qtd_parcelas = 0;

            puts("em quantas parcelas?");
            scanf("%d", &qtd_parcelas);

            if(qtd_parcelas == 2){
                valor_pagar = valor;
                printf("O valor total a pagar sera de %.2f \n em duas parcelas de %.2f", valor_pagar, valor_pagar/2);  
            }
            else if(qtd_parcelas == 3){
                valor_pagar = valor * 1.1;
                printf("O valor toral a pagar sera de %.2f \n em três parcelas de %.2f", valor_pagar, valor_pagar/3);
            }
            else 
                puts("Quantidade de parcelamento não aceito.");
        }
    }
}