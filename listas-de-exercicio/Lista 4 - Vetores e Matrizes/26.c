/*Leia uma matriz quadrada a (3x3) e gere uma matriz b invertida. Imprima b. Exemplo:*/


#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matriza[3][3], matrizb[3][3];
    int i, j, k, l;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matriza[i][j]);
        }

    for(i = 2, j = 0 ; i >= 0; i--, j++)
        for(k = 2, l = 0 ; k >= 0; k--, l++)
            matrizb[j][l] = matriza[i][k];

    puts("\nmatriz a\n");
    for(i = 0 ; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ", matriza[i][j]);

        printf("\n");
    }
    
    puts("\nmatriz b\n");
    for(i = 0 ; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ", matrizb[i][j]);

        printf("\n");
    }
}