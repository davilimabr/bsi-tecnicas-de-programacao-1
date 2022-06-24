/*22. Leia duas matrizes de inteiros a e b (3x3). Em seguida, gere e imprima a matriz c = a + b.*/

/*23. Leia duas matrizes de inteiros a e b (3x3). Em seguida, gere e imprima a matriz c = a x b.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matriza[3][3], matrizb[3][3], matrizc[3][3], matrizd[3][3];
    int i, j;

    puts("matriz 1");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matriza[i][j]);
        }

    puts("matriz 2");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matrizb[i][j]);

            matrizc[i][j] = matriza[i][j] + matrizb[i][j];
            matrizd[i][j] = matriza[i][j] * matrizb[i][j];
        }

    puts("matriz c (matriz a + matriz b)");   
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            printf("%d\n", matrizc[i][j]);

    puts("matriz d (matriz a * matriz b)");   
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            printf("%d\n", matrizd[i][j]);
}

