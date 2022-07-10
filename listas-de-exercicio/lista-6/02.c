/*Implemente a função

int digitos(int n)

que recebe um valor inteiro n e retorna o número de dígitos de n. Por exemplo, se n = 4875, a
função deve retornar 4.*/
#include<stdio.h>

int digitos(int num){
    int sobra = num, count = 0;

    do{
        sobra = sobra / 10;
        count++;
    }    
    while(sobra > 0);

    return count;
}

int main(void){
    int num;
    
    puts("digite um numero");
    scanf("%d", &num);

    printf("quantidade de digitos de %d: %d", num, digitos(num));
}