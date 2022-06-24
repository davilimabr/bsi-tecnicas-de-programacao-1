/*
Leia dois valores de hora, minuto e segundo (h1, m1, s1, h2, m2, s2). Em seguida, imprima o
intervalo entre esses dois horários em hora, minuto e segundo. Assuma que h2/m2/s2 é maior ou
igual a h1/m1/s1. Exemplo: se h1 = 9, m1 = 45, s1 = 38, h2 = 15, m2 = 27 e s2 = 12 então a
diferença é 05:41:34
*/

#include<stdio.h>

int main(void)
{
    int hora1, min1, seg1, hora2, min2, seg2;

    printf("Insira um horário (h:m:s): ");
    scanf("%d%d%d", &hora1, &min1, &seg1);

    printf("Insira outro horário (h:m:s): ");
    scanf("%d%d%d", &hora2, &min2, &seg2);

    int horario1, horario2, diferenca;

    horario1  = (hora1 * 3600) + (min1 * 60) + seg1;
    horario2  = (hora2 * 3600) + (min2 * 60) + seg2;
    diferenca = horario2 - horario1;

    printf("h1%d\nh2%d\ndif%d", horario1, horario2, diferenca);

    int hora3, min3, seg3;

    hora3 = diferenca / 3600;
    min3  = diferenca % 3600 / 60;
    seg3  = diferenca % 3600 % 60;

    printf("difereça: %d:%d:%d", hora3, min3, seg3);
}