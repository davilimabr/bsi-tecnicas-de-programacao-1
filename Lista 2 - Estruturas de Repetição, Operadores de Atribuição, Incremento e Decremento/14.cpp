/*De acordo com a Matemática Financeira, o cálculo do valor da prestação P para amortização de um
financiamento de valor V em n prestações e a uma taxa de juros k é dada pelas fórmulas: *formula*
Leia os valores de V, n e k e imprima o valor da prestação P*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float valor, taxa, n_parcelas, prestacao;
    
    puts("Insira o valor do financiamento, juntamente da taxa de juros e o número de parcelas.");
    puts("Valor:");
    scanf("%f", &valor);
    
    puts("Taxa(%):");
    scanf("%f", &taxa);
    
    puts("Parcelas(qtd):");
    scanf("%f", &n_parcelas);

    float t = (pow(1 + taxa/100, n_parcelas) - 1) / (taxa/100 * pow( 1 + taxa/100, n_parcelas));
    prestacao = valor / t;
    
    printf("As parcelas serão de R$%.2f", prestacao);
}