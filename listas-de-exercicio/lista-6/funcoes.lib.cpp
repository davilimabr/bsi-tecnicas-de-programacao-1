#include<stdio.h>
#include<stdlib.h>

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

bool hora_valida(int hora, int min, int seg){
    return hora >= 0 && hora < 24   &&   min >= 0 && min < 60   &&   seg >= 0 && seg < 60;
}

bool encaixa(int a, int b){
    do{
        int digito_a = a % 10;
        int digito_b = b % 10;

        if(digito_a != digito_b)
            return false;

        a /= 10;
        b /= 10;
    }while(b > 1);

    return true;
}

void ordenaVetor(float v[], int tam, bool crescente){
    for(int i = 0; i < tam-1;)
        if(crescente ? v[i] > v[i+1] : v[i] < v[i+1]){
            int temp = v[i+1];
            v[i+1] = v[i];
            v[i] = temp;
            
            if(i > 0)
                i--;
        }
        else i++;
}

int digitos(int num){
    int sobra = num, count = 0;

    do{
        sobra = sobra / 10;
        count++;
    }    
    while(sobra > 0);

    return count;
}

int digitoslong(long long num){
    long long sobra = num, count = 0;

    do{
        sobra = sobra / 10;
        count++;
    }    
    while(sobra > 0);

    return count;
}

int jogar_dado(){
    return 1 + (rand() % 6);
}

int jogar_dados(){
    return jogar_dado() + jogar_dado();
}