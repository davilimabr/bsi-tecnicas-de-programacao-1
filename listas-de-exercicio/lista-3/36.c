/*Leia um número inteiro n (n > 0) e imprima se ele é ou não capicua. Um número é capicua se lido
da esquerda para a direita é igual quando lido da direita para a esquerda. Exemplo: 2332.*/

#include<stdio.h>
#include<math.h>

int main(void){
    int num;

    do{
        puts("digite um numero inteiro positivo");
        scanf("%d", &num);
    }while(num < 1);

    int i, div = 1;
    
    for(i = 10;; i*=10){
        if(num % i != num)
            div *= 10;
        else break;
    }

    int num_inv = 0, mult = 1, sobra = num;

    for(i = 0; div >= 1; i++, mult *=10, div /= 10){
        num_inv += (sobra / div) * mult;
        sobra %= div;
    }

    if(num_inv == num)
        puts("e capicua");
    else 
        puts("nao e capicua");
}