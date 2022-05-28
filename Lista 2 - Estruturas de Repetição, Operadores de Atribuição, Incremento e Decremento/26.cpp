/*
Baseado no ano e peso do modelo de um automóvel, uma cidade determina a sua classe e o valor da
taxa de registro usando a seguinte tabela:
*não deu pra copiar a tabela*
Usando esta tabela, leia o ano e o peso do modelo de um automóvel e calcule e imprima a classe e o
valor da taxa de registro para o carro.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ano;
    float peso;

    puts("Insira o ano e peso do carro");

    puts("Ano:");
    scanf("%d", &ano);

    puts("Peso (kg):");
    scanf("%f", &peso);

    puts("Classe do automóvel e taxa de registro, respectivamente:");

    if(ano <= 1970){
        if(peso < 1200)
            puts("1 e 16,50");
        else if(peso > 1700)
            puts("3 e 46,50");
        else 
            puts("2 e 25,50");
    }
    else if(ano > 1980){
        if(peso < 3600)
            puts("7 e 19,50");
        else 
            puts("8 e 52,50");
    }
    else{
         if(peso < 1200)
            puts("4 e 25,00");
        else if(peso > 1700)
            puts("6 e 52,50");
        else 
            puts("5 e 30,50");
    }
}