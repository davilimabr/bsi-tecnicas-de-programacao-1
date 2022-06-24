/*Os dias do ano podem ser definidos de forma cont�nua. Por exemplo: 01/01 � o 1� dia do ano, 05/01
� o 5� dia do ano e 03/02 � o 34� dia do ano. Leia dois valores d, m e a e informe o dia do ano
correspondente � data d/m/a. Assuma que d/m/a � uma data v�lida*/

#include<stdio.h>
#include <locale.h>
#include "funcoes_desafios2e3.cpp"

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    puts("digite um dia, mes e ano, respectivamente");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(!DataValida(dia, mes, ano)){
        puts("Data inv�lida");
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

    printf("O dia %d/%d � o %d� do ano %d", dia, mes, dia_ano, ano);
}