/*Leia uma matriz a (2x3) e um valor inteiro k. Em seguida, gere outra matriz b (2x3) onde os
valores de b são os valores de a multiplicados por k.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matriz[2][3], multiplicador;
    int i, j;

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    
    puts("digite um numero para multiplicar cada elemento da matriz");
    scanf("%d", &multiplicador);

    int matriz_xmulti[2][3];

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
             matriz_xmulti[i][j] = matriz[i][j] * multiplicador;

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
             printf("%d\n", matriz_xmulti[i][j]);
}

