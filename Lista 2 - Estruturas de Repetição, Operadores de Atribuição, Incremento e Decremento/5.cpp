/*Leia três valores a, b e c e imprima o maior e o menor deles. Elabore uma solução sem usar os
operadores lógicos, ou seja, usando somente os operadores relacionais*/
#include<stdio.h>

int main(void){
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = 0, menor = 0;

    if(num1 > num2){
        menor = num2;
        maior = num1;
    }
    else {
        menor = num1;
        maior = num2;
    }

    if(num3 > maior)
        maior = num3;
    else if (num3 < menor)
        menor = num3;

    printf("maior : %d\nmenor: %d", maior, menor);        
}