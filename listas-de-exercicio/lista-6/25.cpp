/*Pesquisa sobre as funções srand e rand da biblioteca do C/C++. Em seguida, implemente a função

int aleatorio(int a, int b)

que retorna um número aleatório entre a e b, inclusive.*/

#include<stdio.h>
#include <stdlib.h>

int aleatorio(int a, int b){
    while(true){
        int random = rand();

        if(random >= a && random <= b)
            return random;
    }
}

int main(void){
    int num1, num2;

    puts("digite o intervalo do numeo aleatorio");
    scanf("%d %d", &num1, &num2);

    printf("%d", aleatorio(num1, num2));
}