/*Implemente a função

void quebra_real(double n, int &parte_inteira, double &parte_decimal)

que recebe um valor real n e retorna sua parte inteira e sua parte decimal.*/
#include<stdio.h>

void quebra_real(double n, int &parte_inteira, double &parte_decimal){
    parte_inteira = (int) n;
    parte_decimal = n - parte_inteira;
}

int main(void){
    double num, parte_decimal;
    int parte_inteira;

    puts("digite um numero decimal");
    scanf("%lf", &num);

    quebra_real(num, parte_inteira, parte_decimal);

    printf("parte inteira: %d\nparte decimal: %f", parte_inteira, parte_decimal);
}