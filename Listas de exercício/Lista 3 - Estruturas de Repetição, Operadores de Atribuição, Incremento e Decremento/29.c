/*Leia um número n e imprima um quadrado de asteriscos de n x n (n > 0). Exemplo: n = 3.*/

#include<stdio.h>

int main(void){
    int n;

    do{
        puts("digite um numero inteiro e positivo");
        scanf("%d", &n);
    }while(n < 1);

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("* ");
        
        printf("\n");
    }
}
