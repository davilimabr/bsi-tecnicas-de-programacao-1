//Imprima todos os números de 50 até 1.

#include<stdio.h>

int main(void){
    int num = 50;
    while(num > 0){
        printf("%d\n", num);
        num--;
    }

    // ou

    int i;
    for(i = 50; i > 0; i--)
        printf("%d\n", i);
}