/*
Leia o último dígito da placa do carro e exiba o mês em que vence o IPVA, segundo a tabela
abaixo:
Final da placa Prazo
0       Até 30/04/2020
1       Até 31/05/2020
2       Até 30/06/2020
3       Até 31/07/2020
4       Até 30/08/2020
5       Até 30/09/2020
6 e 7   Até 30/11/2020
8 e 9   Até 31/12/2020

Implemente uma solução com if e outra com switch.
*/

#include <stdio.h>
#include <stdlib.h>

void SolucaoIf(){
    int ult_num;

    puts("Insira o último digito da placa do carro");
    scanf("%d", &ult_num);

    if(ult_num == 0)
        puts("Até 30/04/2020");
    else if(ult_num == 1)
        puts("Até 31/05/2020");
    else if(ult_num == 2)
        puts("Até 30/06/2020");
    else if(ult_num == 3)
        puts("Até 31/07/2020");
    else if(ult_num == 4)
        puts("Até 30/08/2020");
    else if(ult_num == 5)
        puts("Até 30/09/2020");
    else if(ult_num == 6 || ult_num == 7)
        puts("Até 30/11/2020");
    else if(ult_num == 8 || ult_num == 9)
        puts("Até 31/12/2020");
}

void SolucaoSwitch(){
    int ult_num;

    puts("Insira o último digito da placa do carro");
    scanf("%d", &ult_num);

    switch(ult_num){
        case 1:
            puts("Até 30/04/2020");
        break;
        case 2:
            puts("Até 30/06/2020");
        break;
        case 3:
            puts("Até 31/07/2020");

        break;
        case 4:
            puts("Até 30/08/2020");

        break;
        case 5:
            puts("Até 30/09/2020");
        break;
        case 6:
        case 7:
            puts("Até 30/11/2020");

        break;
        case 8:
        case 9:
            puts("Até 31/12/2020");
        break;
    }
}

int main(void) {
    //SolucaoIf();
    SolucaoSwitch();
}