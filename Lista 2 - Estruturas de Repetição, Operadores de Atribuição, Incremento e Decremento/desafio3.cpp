/*Os dias do ano podem ser definidos de forma contínua. Por exemplo: 01/01 é o 1º dia do ano, 05/01
é o 5º dia do ano e 03/02 é o 34º dia do ano. Leia dois valores d, m e a e informe o dia do ano
correspondente à data d/m/a. Assuma que d/m/a é uma data válida*/

#include<stdio.h>
#include <locale.h>
#include "funcoes_desafios2e3.cpp"

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    puts("digite um dia, mes e ano, respectivamente");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(!DataValida(dia, mes, ano)){
        puts("Data inválida");
        return 0;
    }

    int i, dia_ano = dia;
    
    for(i = 1; i < mes; i++){
        if(i > 7){
             if(i % 2 == 0)
                dia_ano += 31;
            else 
                dia_ano += 30;
        }
        else{
            if(i % 2 == 0)
                dia_ano += 30;
            else 
                dia_ano += 31;
        }
    }

    if(Ebissexto(ano))
        dia_ano--;
    else
       dia_ano -= 2;

    printf("O dia %d/%d é o %dº do ano %d", dia, mes, dia_ano, ano);
}