#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int tamanho_S, tamanho_T;
    int i, j, k; // contadores

    //entrada dos valores
    do{
        puts("Insira o tamanho do conjunto S de numeros:");
        scanf("%d", &tamanho_S);
    }while(tamanho_S < 3);
    
    int conjunto_S[tamanho_S];
    
    for(i = 0; i < tamanho_S; i++){
        puts("digite o numero:");
        scanf("%d", &conjunto_S[i]);
    }

    system("cls");

    do{
        puts("Digite o tamanho do conjunto T:");
        scanf("%d", &tamanho_T);
    }while(tamanho_T < 2 || tamanho_T >= tamanho_S);

    //imprime os valores de entrada
    system("cls");
    printf("Quantidade de numeros inteiros do conjunto s (k): %d\n", tamanho_S);
    printf("Conjunto S -> S = { ");

    for(i = 0; i < tamanho_S; i++){
        printf("%d", conjunto_S[i]);

        if(i != tamanho_S - 1)
            printf(", ");
    }

    printf(" }\n");
    printf("Quantidade de numeros inteiros no sub-conjunto t (t): %d\n", tamanho_T);

    //separa todos os possiveis sub conjuntos t dentro de s
    int sub_conjunto_T, sub_conjuntos_T[tamanho_S];
    float multiplicador;  

    for(i = 0; i < tamanho_S; i++)
        if(i + tamanho_T <= tamanho_S){
            multiplicador = pow(10, tamanho_T) / 10; 
            sub_conjunto_T = 0;

            for(j = i; j < i + tamanho_T; j++){
                if(j < i + tamanho_T - 1)
                    if(conjunto_S[j] > 9 && conjunto_S[j+1] > 9)
                        conjunto_S[j] *= floor(log10(conjunto_S[j])) * 10;

                sub_conjunto_T += multiplicador * conjunto_S[j];
                multiplicador /= 10;
            }
            sub_conjuntos_T[i] = sub_conjunto_T;
        }

    bool ja_existe, nao_existe = true;
    int count = 0, divisor;

    for(i = 0; i < tamanho_S; i++){
        count = 0;
        for(j = i; j < tamanho_S; j++)
            if(sub_conjuntos_T[i] == sub_conjuntos_T[j]){
                    count++;
        }

        ja_existe = false;
        if(i > 0)
            for(j = i - 1; j >= 0; j--)
                    if(sub_conjuntos_T[i] == sub_conjuntos_T[j])
                        ja_existe = true;

        if(count > 1 && !ja_existe){
            nao_existe = false;
            sub_conjunto_T = sub_conjuntos_T[i];
            
            if(sub_conjunto_T > 999)
                printf("%d - %dx\n", sub_conjunto_T, count);
            else{
                 divisor = floor(pow(10, tamanho_T)) / 10;
                while(divisor >= 1){
                    printf("%d ", sub_conjunto_T / divisor);
                    sub_conjunto_T %= divisor;
                    divisor /= 10;
                }
                printf("- %dx\n", count);
            }
        }
    }
    if(nao_existe)
        puts("Nao existe");
}
