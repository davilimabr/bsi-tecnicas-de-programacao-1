#include<stdio.h>
#include<locale.h>
#include<stdio.h>
#include <stdlib.h> //necess�rio para usar as fun��es malloc() e free()

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int tamanho_S;
    float *conjunto_S;

    do{
         puts("Insira o tamanho do conjunto S de n�meros:");
        scanf("%d", &tamanho_S);
    }while(tamanho_S < 3);
   
    conjunto_S = (float *) malloc(tamanho_S * sizeof(float));

    int i;
    for(i = 0; i < tamanho_S; i++){
        puts("digite o n�mero:");
        scanf("%f", &conjunto_S[i]);
    }

    system("cls");

    int tamanho_T;
    do{
        puts("Digite o tamanho do conjunto T:");
        scanf("%d", &tamanho_T);
    }while(tamanho_T < 2);
   
    for(i = 0; i < tamanho_S; i++){
       
    }
}
