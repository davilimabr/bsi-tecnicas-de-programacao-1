/*Leia um número inteiro n e informe se ele é ou não divisível por 6*/

#include<stdio.h>

int main(void){
    int numero;
    const int DIVISOR = 6;

    scanf("%d", &numero);

    if(numero % DIVISOR == 0)
        printf("O numero e divisivel por 6");
    else
        printf("O numero nao e divisivel por 6");
}