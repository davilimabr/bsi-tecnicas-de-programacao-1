/*Crie um programa que controla o consumo de energia dos eletrodomésticos de uma casa. Leia até
10 eletrodomésticos com nome, potência (real em kW) e tempo ativo por dia (real, em horas). Ao
final leia um tempo t (em dias) e apresente: nome, potência, horas de uso diário, consumo diário e
consumo relativo (percentual) de cada eletrodoméstico nesse período e o total de Kw consumido no
período.*/
#include<stdio.h>

struct Eletrodomestico
{
    char Nome[30];
    float Potencia;
    float TempoAtivoPorDia;
    float ConsumoDiario;
};

float CalculaConsumoDiario(Eletrodomestico eletro[], int tam){
    float consumo_diario_total = 0;
    for(int i = 0; i < tam; i++)
        consumo_diario_total += eletro[i].ConsumoDiario = eletro[i].TempoAtivoPorDia * eletro[i].Potencia;

    return consumo_diario_total;
}

int main(void){
    const int QTD_ELETRO = 3;
    Eletrodomestico eletro[QTD_ELETRO];

    for(int i = 0; i < QTD_ELETRO; i++){
        printf("\neletrodomestico %d\n", i+1);
        puts("digite o nome do eletrodoméstico");
        gets(eletro[i].Nome);


        puts("digite a potência do eletrodoméstico em KW");
        scanf("%f", &eletro[i].Potencia);

        puts("digite o tempo ativo em horas do eletrodoméstico");
        scanf("%f", &eletro[i].TempoAtivoPorDia);
        getchar();
    }
   
    float consumo_diario_total = CalculaConsumoDiario(eletro, QTD_ELETRO);
    
    for(int i = 0; i < QTD_ELETRO; i++){
        printf("Nome:                 %s\n", eletro[i].Nome);
        printf("Potência:             %f\n", eletro[i].Potencia);
        printf("Horas ativas por dia: %f\n", eletro[i].TempoAtivoPorDia);
        printf("Consumo diário:       %f\n", eletro[i].ConsumoDiario);
        printf("Consulo relativo:     %f\n", (100 * eletro[i].ConsumoDiario) / consumo_diario_total);
    }
}



