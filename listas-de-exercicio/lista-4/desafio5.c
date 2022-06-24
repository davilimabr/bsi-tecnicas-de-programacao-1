/*Leia doze valores percentuais inteiros de 0 a 100 (um para cada mês do ano) e gere um gráfico
usando asteriscos conforme desenho a seguir. Arredonde os valores informados para múltiplos de 5.
100 |
95 | ***
90 | ***
85 | ***
80 | *** ***
75 | *** ***
70 | *** *** ***
65 | *** *** ***
60 | *** *** *** ***
55 | *** *** *** ***
50 | *** *** *** *** *** ***
45 | *** *** *** *** *** ***
40 | *** *** *** *** *** *** ***
35 | *** *** *** *** *** *** *** *** ***
30 | *** *** *** *** *** *** *** *** ***
25 | *** *** *** *** *** *** *** *** *** ***
20 | *** *** *** *** *** *** *** *** *** *** ***
15 | *** *** *** *** *** *** *** *** *** *** ***
10 | *** *** *** *** *** *** *** *** *** *** *** ***
5 | *** *** *** *** *** *** *** *** *** *** *** ***
----+-------------------------------------------------
Jan Fev Mar Abr Mai Jun Jul Ago Set Out Nov Dez*/

#include<stdio.h>

int main(void){
    int porcentagens[12], aux;
    int i, j;

    for(i = 0; i < 12;){
        printf("valor percentual [%d]> ", i+1);
        scanf("%d", &aux);

        if(aux >= 0 && aux <= 100){
            porcentagens[i];
            i++;
        }
    }
    puts("\n\n\n"); 
    for(i = 100; i >= 0; i= i-5){
        for(j = 0; j < 12; j++){
            if(j == 0)
                printf("%3.d |", i);

            if(porcentagens[j] >= i)
                printf("***   ");
            else 
                printf("      ");
        }
        printf("\n");
    }
    printf("     Jan   Fev   Mar   Abr   Mai   Jun   Jul   Ago   Set   Out   Nov   Dez\n\n\n");
}