#include<stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho_S, *conjunto_S;
    int i, j, k, count;

    do{
        puts("Insira o tamanho do conjunto S de n�meros:");
        scanf("%d", &tamanho_S);
    }while(tamanho_S < 3);
    
    conjunto_S = (int *) malloc(tamanho_S * sizeof(int));
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
   

   int qtd_T = 0;
    for(i = 1; i < tamanho_S; i++){
       for(j = i; j < i + tamanho_T; j++){
           
           for(k = j; k < j + tamanho_T; k++){
               printf("%d\n", conjunto_S[k]);
       }
       }
       printf("\n\n");
    }
}
