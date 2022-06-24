/*Leia um número inteiro k e imprima todos os números primos no intervalo de 1 a k.*/

#include<stdio.h>

int main(void){
    int num;

    puts("digite um numero inteiro:");
    scanf("%d", &num);

    int i, j, divisivel;
    for(i = 1; i < num; i++){
        divisivel = 0;

        for(j = 1; j <= i; j++)
            if(i % j == 0)
                divisivel++;

        if(divisivel == 2)
            printf("%d\n", i);
    }
}