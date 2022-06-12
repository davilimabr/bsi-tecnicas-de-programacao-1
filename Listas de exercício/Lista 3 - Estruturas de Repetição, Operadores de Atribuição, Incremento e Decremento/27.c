/*
Leia um n�mero inteiro e par n e imprima o valor de H, dado pela s�rie abaixo. Se n ? 1 ou n n�o
for par, ent�o imprima uma mensagem de erro.
*/

#include<stdio.h>

int main(void){
    int n;
    float h = 0;

    puts("insira um numero inteiro e positivo");
    scanf("%d", &n);

    if(n < 1){
        puts("o numero deve ser inteiro, positivo e diferente de 0");
        return 0;
    }

    int i, divisor = 1;
    for(i = 1; divisor <= n; i++){
        
        if(i % 2 == 0)
            h -= 1.0/divisor;
        else
            h += 1.0/divisor;
         
        if (i > 1)
            divisor += 2;
        else
            divisor++;
    }

    printf("%f", h);
}