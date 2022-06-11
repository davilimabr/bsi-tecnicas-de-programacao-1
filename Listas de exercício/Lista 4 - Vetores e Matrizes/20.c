/*Ler um vetor notas com 20 notas inteiras de 0 a 10 e imprima um histograma indicando quantos
alunos tiraram cada nota. Por exemplo, se as notas fossem:
9 4 6 2 7 6 7 9 3 5 4 1 2 10 4 6 4 8 7 9
O histograma seria:
0
1 *
2 * *
3 *
4 * * * *
5 *
6 * * *
7 * *
8 *
9 * * *
10 *
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int notas[20], qtd_notas[11];
    int i, j;

    for(i = 0; i < 20; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &notas[i]);
    }

    int count;
    for(i = 0;i < 11;i++){
        count = 0;

        for(j = 0; j < 20; j++)
            if(i == notas[j])
                count++;
        
        qtd_notas[i] = count;
    }

    for(i = 0;i < 11;i++){
        printf("(%d)  ", i);

        for(j = 0; j < qtd_notas[i]; j++)
            printf("* ");
        
        printf("\n");   
    }
}




