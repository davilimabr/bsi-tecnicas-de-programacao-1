/*Implemente a função

bool amigos(int x, int y)

que retorna true ou false indicando se os números x e y são amigos ou não. x e y serão amigos se a
soma dos divisores próprios de x for igual a y e se a soma dos divisores próprios de y for igual a x.

2
Dica 1: divisores próprios são os divisores de um número sem contar com ele mesmo. Os divisores
próprios de 6 são 1, 2 e 3.
Dica 2: use a função implementada no exercício anterior.
Dica 3: 1184 e 1210 são amigos.*/

#include<stdio.h>

int soma_divisores(int n){
    int divi_sum = 0;

    for(int i = 1; i < n; i++)
        if(n % i == 0)
            divi_sum += i;
    
    return divi_sum;
}

bool amigos(int x, int y){
    return soma_divisores(x) == y && soma_divisores(y) == x;
}

int main(void){
    int num1, num2;

    puts("digite dois numeros");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(amigos(num1, num2))
        puts("os numeros sao amigos");
    else
        puts("os numeros NAO sao amigos");
}

 
