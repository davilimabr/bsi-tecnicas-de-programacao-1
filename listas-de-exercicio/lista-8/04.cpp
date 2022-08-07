/*
Crie um programa que lê os dados de um estacionamento: placa do carro, modelo e hora de entrada
e de saída, com horas e minutos. Ao final, imprima os dados lidos com o valor a ser pago pelo
estacionamento:
a) Primeira hora: R$ 5,00
b) Hora extra: R$ 2,00
c) Horas incompletas deverão ter cobrança proporcional
*/

#include<stdio.h>

struct Horario{
    int Hora;
    int Minuto;
    int Segundo;
};

struct Estacionamento{
    char PlacaDoCarro[30];
    char ModeloCarro[30];
    Horario Entrada;
    Horario Saida;
};

float ObterValoraSerPago(Estacionamento estacionamento){
    float valor = 0;
    int horas = estacionamento.Saida.Hora - estacionamento.Entrada.Hora;
    int minutos = estacionamento.Saida.Minuto - estacionamento.Entrada.Minuto;

    if(horas >= 1)
        valor += 5;
    if(horas - 1 > 0)
        valor += (horas - 1) * 2;
    if(minutos > 0)
        valor += ((float)minutos / 60) * 2;

    return valor;
}

int main(void){
    while(true){
    Estacionamento estacionamento;

    puts("digite a placa do carro");
    gets(estacionamento.PlacaDoCarro);

    puts("digite o modelo do carro");
    gets(estacionamento.ModeloCarro);

    Horario aux;
    puts("digite o horário de entrada (h:m:s)");
    scanf("%d %d %d", &aux.Hora, &aux.Minuto, &aux.Segundo);
    estacionamento.Entrada = aux;

    puts("digite o horário de saida (h:m:s)");
    scanf("%d %d %d", &aux.Hora, &aux.Minuto, &aux.Segundo);
    estacionamento.Saida = aux;


    printf("Placa: %s\n", estacionamento.PlacaDoCarro);
    printf("Modelo: %s\n", estacionamento.ModeloCarro);
    printf("Entrada: %d:%d:%d\n", estacionamento.Entrada.Hora,
    estacionamento.Entrada.Minuto,
    estacionamento.Entrada.Segundo);
    printf("Saída: %d:%d:%d\n", estacionamento.Saida.Hora,
    estacionamento.Saida.Minuto,
    estacionamento.Saida.Segundo);
    printf("Valor a ser pago: %f", ObterValoraSerPago(estacionamento));getchar();
}
}