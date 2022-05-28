/*Em um mercado de peças de baixo preço, cada comprador só pode comprar um tipo de peça por
vez, mas não tem limite da quantidade de peças. Construa um programa que entre com a
quantidade de peças e o valor de cada peça. Se o total for maior que R$ 200,00, o cliente terá um
desconto de 20%. Imprima o valor total a pagar.
*/
#include<stdio.h>

int main(void){
    int qtd_pecas;
    float v_pecas;

    puts("qtd pecas:");
    scanf("%d", &qtd_pecas);

    puts("valor pecas (R$):");
    scanf("%f", &v_pecas);

    float v_total = qtd_pecas * v_pecas;
    float v_a_pagar = v_total;

    if(v_total > 200)
        v_a_pagar *= 0.8;
    
    printf("valor total a ser pago R$%.2f", v_a_pagar);
}