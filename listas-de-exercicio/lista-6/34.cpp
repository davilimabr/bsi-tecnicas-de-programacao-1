/*
Implemente a função

bool encaixa(int a, int b)

que retorna true se o número b corresponde aos últimos dígitos de a; ou false, caso contrário.
Exemplos:
a = 567890 b = 890 → true
a = 1243 b = 1243 → true
a = 2357 b = 358 → false
a = 2345 b = 12345 → false
*/

#include<stdio.h>

bool encaixa(int a, int b){
    do{
        int digito_a = a % 10;
        int digito_b = b % 10;

        if(digito_a != digito_b)
            return false;

        a /= 10;
        b /= 10;
    }while(b > 1);

    return true;
}

int main(void){
    while(true){
    int numa, numb;

    puts("digite dois numeros:");
    scanf("%d %d", &numa, &numb);

    printf("%d      %d      => ", numa, numb);
    if(encaixa(numa, numb))
        puts("encaixa");
    else
        puts("nao encaixa");

    }
}

