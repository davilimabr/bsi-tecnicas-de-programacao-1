//Imprima todos os números de 1 até 40.

#include<stdio.h>

int main(int){
    int num = 1;
    while(num <= 40){
        printf("%d\n", num);
        num++;
    }

    // ou

    int i;
    for(i = 1; i <= 40; i++)
        printf("%d\n", i);
}