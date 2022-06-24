/*28. Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que se encontram acima da
diagonal principal e a soma deles.*/

/*29. Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que se encontram abaixo da
diagonal principal e o produto deles.*/

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

    int soma = 0;

    puts("\nelementos acima da diagonal principal");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j > i ){
                printf("%d ", matriz[i][j]);
                soma += matriz[i][j];               
            }
            else
                printf("X ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nsoma dos elementos acima da diagonal principal: %d", soma);
    
    puts("\nelementos abaixo da diagonal principal");

    int produto = 1;    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j < i ){
                printf("%d ", matriz[i][j]);
                produto *= matriz[i][j];               
            }
            else
                printf("X ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nproduto dos elementos abaixo da diagonal principal: %d", produto);
}