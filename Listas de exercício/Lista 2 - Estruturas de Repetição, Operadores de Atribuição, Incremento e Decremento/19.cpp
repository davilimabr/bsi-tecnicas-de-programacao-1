
/*Leia o ano atual e o ano de nascimento de uma pessoa e exiba a sua idade. A seguir, informe se a
pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 60 anos)
ou idosa (61 anos em diante).*/

#include <stdio.h>

int main(void) {
    int ano_nasc, ano_atual, idade; 

    puts("Insira o ano atual e em segui o seu ano de nascimento");
    scanf("%d %d", &ano_atual, &ano_nasc);

    idade = ano_atual - ano_nasc;

    if(idade > 0 && idade <= 3)
        puts("você é bebê!");
    else if(idade > 3 && idade <= 10)
        puts("você é criança!");
    else if(idade > 10 && idade <= 18)
        puts("você é adolecente!");
    else if(idade > 18 && idade <= 60)
        puts("você é adulto!");
    else if(idade > 60 && idade <= 120)
        puts("você é idoso!");
    else 
        puts("idade inválida");
}