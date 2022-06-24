/*
Ler:
- tipo de eletrodoméstico
    - F - forno ou M - Microondas
- valor
    - v > 0
- quantidade de parecelas
    - p > 0 
    - p < 19 (caso o eletro seja F) e p < 13 (caso o eletro seja F)

Caso algum valor for inválido deve ser impresso uma mensagem de erro e repetir até o usuário inserir um 
valor válido. 

Deve ser aplicado um desconto de acordo com a tabela, que relaciona as quantidades de parcelas com os descontos

Imprimir no final o valor total e o das parcelas (valor total / parcelas)

eletrodoméstico |   parcelas   |   desconto
forno           |      1       |     0%         
                |  2 a 6       |     5%         
                |  7 a 18      |     9%         
                |  19 ou mais  |     mensagem de erro         
microondas      |      1       |     0%         
                |  2 a 5       |     6%         
                |  6 a 12      |     8%         
                |  13 ou mais  |     mensagem de erro         

(acho que todas as porcentagens de desconta da tabela estão correts, vamo ver se eu tenho uma memória de elefante mesmo)

*/

#include<stdio.h>

int main(void){
    char eletro;
    int parcelas;
    float valor, v_total;

    while(true){
        puts("escolha o eletrodoméstico (F - forno | M - microondas)");
        scanf("%c", &eletro);
        getchar();

        if(eletro != 'F' && eletro != 'M')
            puts("eletrodoméstico inválido");
        else break;
    }

    while(true){
        puts("digite o valor do eletrodoméstico");
        scanf("%f", &valor);

        if(valor <= 0)
            puts("valor inválido");
        else break;
    }

    while(true){
        puts("digite a quantidade de parcelas");
        scanf("%d", &parcelas);

        if(parcelas <= 0)
            puts("quantidade de parcelas inválidas");
        else if(eletro == 'F' && parcelas >= 19)
            puts("quantidade de parcelas inválidas");
        else if(eletro == 'M' && parcelas >= 13)
            puts("quantidade de parcelas inválidas");
        else break;
    }

    if(eletro == 'F'){
        if(parcelas >= 2 && parcelas <= 6)
            v_total = valor * 1.05;
        else if(parcelas > 6 && parcelas <= 18)
            v_total = valor * 1.09;
        else 
            v_total = valor;
    }
    else{
        if(parcelas >= 2 && parcelas <= 5)
            v_total = valor * 1.06;
        else if(parcelas > 5 && parcelas <= 12)
            v_total = valor * 1.08;
        else 
            v_total = valor;
    }

    if(parcelas == 1)
        printf("Valor total: %2.f\n", v_total);
    else
        printf("Valor total: %2.f\nParcelas: %2.f", v_total, v_total/parcelas);
}