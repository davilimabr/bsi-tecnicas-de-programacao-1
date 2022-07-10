/*Implemente a função

int soma_divisores(int n)

que retorna a soma dos divisores próprios de n. Dica: divisores próprios são os divisores de um
número sem contar com ele mesmo. Os divisores próprios de 6 são 1, 2 e 3.*/

#include<stdio.h>

int soma_divisores(int n){
    int divi_sum = 0;

    for(int i = 1; i < n; i++)
        if(n % i == 0)
            divi_sum += i;
    
    return divi_sum;
}

int main(void){
    int num;

    puts("digite um numero");
    scanf("%d", &num);

    printf("A soma de seus divisores e: %d", soma_divisores(num));
}

