/*Implemente a função

int conta_digitos(int n, int d)

que recebe um valor inteiro n e retorna quantas vezes o dígito d (0 a 9) aparece no número n. Por
exemplo, se n = 6764963 e d = 6 a função deve retornar 3.*/
#include<stdio.h>

int conta_digitos(int n, int d){
    int aux = n, count = 0;

    while(aux > 0){
        if(aux % 10 == d)
            count++;

        aux /= 10;
    }
    return count == 0 ? -1 : count;
}

int main(void){
    int numn, numd;

    puts("digite um numero");
    scanf("%d", &numn);

    puts("digite um algarismo do numero digitado");
    scanf("%d", &numd);

    int qtd_alg = conta_digitos(numn, numd);

    if(qtd_alg == -1)
        puts("o algarismo não existe nesse número");
    else
        printf("o algarismo %d aparece %d vezes em %d", numd, qtd_alg, numn);
}