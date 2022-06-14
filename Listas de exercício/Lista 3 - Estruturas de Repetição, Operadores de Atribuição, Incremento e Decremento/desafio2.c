/*Leia três números inteiros positivos n, i e j. Em seguida, imprima, em ordem crescente os n
primeiros inteiros positivos que são múltiplos de i ou de j ou dos dois. Exemplo: para n = 10, i = 2 e
j = 3 a saída será 2, 3, 4, 6, 8, 9, 10, 12, 14, 15.*/

#include<stdio.h>

int main(void){
    int num1, num2, num3;

    do{
        puts("digite tres numeros, n, i, j, inteiros e positivos, respectivamente");
        scanf("%d %d %d", &num1, &num2, &num3);
    }while(num1 < 1 || num3 < 1 || num3 < 1);

    int i, count = 0;
    for(i = 1; count < num1; i++){
        if(i % num2 == 0 || i % num3 == 0){
            printf("%d ", i);
            count++;
        }
    }
}