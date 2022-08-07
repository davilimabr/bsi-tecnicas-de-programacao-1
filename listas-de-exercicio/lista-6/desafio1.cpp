/*
Implemente a função

bool eh_segmento(int a, int b)

que retorna true se o menor número entre a e b faz parte do outro número; ou false, caso contrário.
Dica: use a função encaixa implementada em um exercício anterior. Exemplos:
a = 567890 b = 678 → true
a = 17 b = 1754 → true
a = 2357 b = 358 → false
a = 12345 b = 45 → true

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "funcoes.lib.cpp"

bool eh_segmento(int a, int b){
    int menor = a < b ? a : b;
    int maior = a > b ? a : b;
    int dgtMenor = digitos(menor);
    int dgtMaior = digitos(maior);

    for(int i = dgtMenor; i <= dgtMaior; i++){
        int pot = ceil(pow(10, i));
        int resto_div = maior % pot;
        int expoente = digitos(resto_div) - dgtMenor;
        float potf = pow(10, expoente);
        int num = resto_div / potf;

        if(num == menor)
            return true;
    }
    return false;
}

int main(void){
    int numa, numb;

    puts("digite dois números");
    scanf("%d %d", &numa, &numb);

    printf("a -> %d   b -> %d   ", numa, numb);
    if(eh_segmento(numa, numb))
        printf("true");
    else
        printf("false");
}






