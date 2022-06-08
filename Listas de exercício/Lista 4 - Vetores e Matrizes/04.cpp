/*Leia um vetor v de 10 inteiros e um valor inteiro k. Copie para um vetor w os elementos de v que
são maiores que k. Ao final, imprima o vetor w.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num[10], maiores_que_k[10], k, qtd_k = 0;
    int i, j; //contadores

    puts("Digite um valor k");
    scanf("%d", &k);

    system("cls");

    i = 0;
    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &num[i]);

        if(num[i] > k){
            maiores_que_k[j] = num[i];
            qtd_k++;
            j++;
        }
    }
    
    for(i = 0; i < qtd_k; i++)
        printf("%d\n", maiores_que_k[i]);
}