//Leia os números inteiros n e m e imprima os números ímpares no intervalo de n a m, inclusive.
//Inverta n com m, caso n > m.

#include<stdio.h>

int main(int){
    int n, m;

    printf("Insira dois numeros:");
    scanf("%d %d", &n, &m);

    int maior, menor;
    maior = menor = n;

    if(n > m)
        menor = m;
    else
        maior = m;

    int i;
    for(i = menor; i <= maior; i++)
        if(i % 2 != 0)
            printf("%d\n", i);      
}