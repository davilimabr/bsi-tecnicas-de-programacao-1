//Leia vários números inteiros positivos até o usuário digitar zero e imprima quantos são ímpares e a
//soma deles.

#include<stdio.h>

int main(void){
    int num, qtd_impares, sum_impares;

    qtd_impares = sum_impares = 0;    
    while(num != 0){
        scanf("%d", &num);

        if(num != 0 && num % 2 != 0){
            qtd_impares++;
            sum_impares += num;
        }
    }

    printf("quantidade de impares: %d\n", qtd_impares);
    printf("soma dos impares: %d", sum_impares);
}   