/*Leia uma matriz quadrada de inteiros m (4 x 4) e imprima todos os elementos, exceto os da
diagonal principal.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matriz[4][4];
    int i, j;

    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matriz[i][j]);
        }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j != i)
                printf("%d ", matriz[i][j]);
            else
                printf("X ", matriz[i][j]);
        }
        printf("\n");
    }
}