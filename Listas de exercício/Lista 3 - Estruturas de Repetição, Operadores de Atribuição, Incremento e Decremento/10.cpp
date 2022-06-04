//Calcule e imprima o somatório dos números de n a m, sendo n e m maiores que zero e m > n.

#include<stdio.h>

int main(int){
    int m, n, soma = 0;

    do{
        puts("n:");
        scanf("%d", &n);
    }while(n < 1);
   
    do{
        puts("m:");
        scanf("%d", &m);
    }while(m < n || m < 1);

    int i;
    for(i = n; i <= m; i++)
        soma += i;

    printf("soma do intervalo de numeros %d a %d: %d", n, m, soma);
}