/*
Leia um número inteiro n e imprima o valor de H, dado pela série abaixo. Se n ? 0 imprima uma
mensagem de erro.
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

    int i;
    for(i = 0; i < n; i++)
        h += (i+1)*n;

    printf("%f", h);
}