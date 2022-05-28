/*Leia um número e imprima uma mensagem informando se ele é igual a 5, ou se é igual a 200, ou se
é igual a 400, ou se ele está no intervalo de 500 a 1000 (inclusive) ou se ele não obedece a nenhuma
dessas condições.*/
#include<stdio.h>

int main(void){
    float num;

    scanf("%f", &num);

    if(num == 5)
        puts("o numero e igual a 5");
    else if(num == 200)
        puts("o numero e igual a 200");
    else if(num == 400)
        puts("o numero e igual a 400");
    else if(num > 500 && num < 1000)
        puts("o numero esta no intervalo entre 500 e 1000");
    else
        puts("o numero não esta em nenhuma restricao");
}