/*Leia uma matriz de inteiros m (4x3). Em seguida, gere e apresente os vetores soma_linha e
soma_coluna, cujos elementos são, respectivamente, a soma das linhas e colunas de m.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matriz[4][3], soma_linha[4], soma_coluna[3];
    int i, j;

    for(i = 0; i < 4; i++)
        for(j = 0; j < 3; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    
    for(i = 0; i < 4; i++)
        soma_linha[i] = 0;            
    
    for(i = 0; i < 3; i++)
        soma_coluna[i] = 0;   
                 
    
    for(i = 0; i < 4; i++)
        for(j = 0; j < 3; j++)
            soma_linha[i] += matriz[i][j];

    for(i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
            soma_coluna[i] += matriz[j][i];

    puts("\nsoma linhas:\n");
    for(i = 0; i < 4; i++){
        printf("linha (%d)   ", i);

        for(j = 0; j < 3; j++)
            printf("%d ", matriz[i][j]);

        printf("- soma: %d\n", soma_linha[i]);
    }

    puts("\nsoma colunas:\n");
    for(i = 0; i < 3; i++){
        printf("coluna (%d)   ", i);
        
        for(j = 0; j < 4; j++)
            printf("%d ", matriz[j][i]);

        printf("- soma: %d\n", soma_coluna[i]);
    }  
}

