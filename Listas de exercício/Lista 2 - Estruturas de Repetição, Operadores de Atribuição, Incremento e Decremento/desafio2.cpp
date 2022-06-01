/*Leia tr?s valores d, m e a e informe se d, m e a formam uma data v?lida*/

#include <stdio.h>
#include <locale.h>
#include "funcoes_desafios2e3.cpp"

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    puts("digite um dia, mes e ano, respectivamente");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(DataValida(dia, mes, ano))
        printf("A data %d/%d/%d é válida", dia, mes, ano);
    else 
        printf("A data %d/%d/%d não é válida", dia, mes, ano);
}

