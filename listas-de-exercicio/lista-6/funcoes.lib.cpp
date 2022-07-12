#include<stdio.h>

void ImprimeVetor(float v[], int tam){
    for(int i = 0; i < tam; i++)
        printf("%f\n", v[i]);
}

void le_vetor_real(float v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("[%d]> ", i);
        scanf("%f", &v[i]);
    }
}

bool pertence(float v[], int tam, float n){
    for(int i = 0; i < tam; i++)
        if(v[i] == n)
            return true;

    return false;
}

void ordenaVetor(float v[], int tam, bool crescente){
    for(int i = 0; i < tam-1; i++)
        if(crescente ? v[i] > v[i+1] : v[i] < v[i+1]){
            int temp = v[i+1];
            v[i+1] = v[i];
            v[i] = temp;
            i = 0;
        }
}