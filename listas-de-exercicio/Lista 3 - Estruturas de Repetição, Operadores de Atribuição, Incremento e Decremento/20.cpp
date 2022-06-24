//Leia números inteiros até que o usuário digite zero ou um número negativo. Ao final, imprima a
//soma e a média aritmética dos números digitados, o menor e o maior número.

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num, sum, maior, menor, count;
    float media;

    sum = maior = menor = count = 0;
    while(true){
        puts("digite um numero inteiro positivo:\n");
        scanf("%d", &num);
        
        if(num < 1)
            break;
        
        sum += num;

        if(count == 0)
            menor = maior = num;

        if(num > maior)
            maior = num;
        else if(num < menor)
            menor = num;

        count++;  
    }
    system("cls");

    media = sum / count;
    printf("media: %.2f\nsoma: %d\nmenor: %d\nmaior: %d", media, sum, menor, maior);
}