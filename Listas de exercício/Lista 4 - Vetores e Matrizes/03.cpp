/*Leia um vetor v de 10 inteiros e um valor inteiro k e imprima quantos elementos são maiores que k.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num[10], k, qtd_k = 0;

    puts("Digite um numero k:");
    scanf("%d", &k);

    system("cls");
    int i;
    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &num[i]);

        if(num[i] > k)
            qtd_k++;
    }

    printf("foram digitados %d numeros maiores que k", qtd_k);
}