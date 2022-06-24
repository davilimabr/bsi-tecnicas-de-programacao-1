/*Leia uma matriz m (4x4), calcule e imprima o seu determinante.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matriz[4][4], determinante;
    int i, j;

    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matriz[i][j]);
        }

    int diagonal_principal = 1;

    for(i = 0, j = 0; i < 4; i++, j++)
        diagonal_principal *= matriz[i][j];
    
    int diagonal_secundaria = 1;
    for(i = 0, j = 3; i < 4; i++, j--)
        diagonal_secundaria *= matriz[i][j];
               
    determinante = diagonal_principal - diagonal_secundaria;
    printf("determinante da matriz e: %d", determinante);
}