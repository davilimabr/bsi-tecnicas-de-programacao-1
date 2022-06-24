/*Em 1582 o papa Gregório III instituiu mudanças no calendário e criou o calendário que usamos
atualmente. Nessa mudança, o dia 01/01/1600 foi definido como um sábado e, até hoje, usamos
esse referencial para calcular o dia da semana de uma data. Assim, para calcular o dia da semana de
uma data qualquer, basta calcular quantos dias se passaram desde 01/01/1600 até essa data e dividir
esse valor por 7. Se o resto é 0 então o dia da semana é sábado, se o resto é 1 o dia da semana é
domingo, e assim por diante. Leia três valores d, m e a e calcule o dia da semana correspondente a
essa data. Assuma que d, m e a formam uma data válida. Dica: use a solução do exercício 30 da
lista de exercícios 2.*/

#include<stdio.h>

bool Ebissexto(int ano){
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
        return true;
    else return false;
}

bool DataValida(int dia, int mes, int ano){
    const int ANO_ATUAL = 2022;
    
    bool valido = true;

    if(ano < 0 || ano > ANO_ATUAL)
        valido = false;
    else{
        if(dia < 1 || dia > 31)
            valido = false;
        else{
            if(mes < 1 || mes > 12)
                valido = false;
            else{
                if((mes <= 7 && mes % 2 == 0 && dia == 31) || (mes > 7 && mes % 2 != 0 && dia == 31))
                    valido = false;
                else{
                    if((Ebissexto(ano) && mes == 2 && dia > 29) || (!Ebissexto(ano) && mes == 2 && dia > 28))
                        valido = false;
                }
            }
        }
    }
    return valido;
}

int main(void){
    int dia, mes, ano;

    puts("digite um dia mes e ano, respectivamente");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(!DataValida(dia, mes, ano)){
        puts("data invalida");
        return 0;
    }

    int somadias = dia - 1; // -1 para desconsiderar o dia 01/01/1600
    int i, j, mes_aux;;
    for(i = 1600; i <= ano; i++){
        if(i == ano)
            mes_aux = mes - 1;
        else 
            mes_aux = 12;  

        for(j = 1; j <= mes_aux; j++){
            if(j == 2){
                somadias += 28;
                 if(Ebissexto(i))
                    somadias++;
            }
            else if(j <= 7 && j % 2 == 0)
                somadias += 30;
            else if(j > 7 && j % 2 != 0)
                somadias += 30;
            else 
                somadias += 31;
        }
    }

    printf("\n\n\no dia da semana dessa data e ");
    switch (somadias % 7){
        case 0:
            puts("sabado");
            break;
        case 1:
            puts("domingo");
            break;
        case 2:
            puts("segunda");
            break;
        case 3:
            puts("terca");
            break;
        case 4:
            puts("quarta");
            break;
        case 5:
            puts("quinta");
            break;
        case 6:
            puts("sexta");
            break;
    }
}