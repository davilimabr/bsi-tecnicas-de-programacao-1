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