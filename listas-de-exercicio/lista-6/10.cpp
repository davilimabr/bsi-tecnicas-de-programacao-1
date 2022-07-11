/*Implemente a função

void le_vetor_real(float v[], int tam)

para ler um vetor de números reais v de tamanho tam.*/

#include<stdio.h>

void le_vetor_real(float v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("[%d]> ", i);
        scanf("%f", &v[i]);
    }
}

int main(void){
    int tam;

    puts("digite o tamanho do vetor");
    scanf("%d", &tam);

    float v[tam];

    le_vetor_real(v, tam);

    for(int i = 0; i < tam; i++)
        printf("[%d]> %f", i,v[i]);
    
}