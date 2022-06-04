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
    int sub_conjunto_T, sub_conjuntos_T[tamanho_S], multiplicador;  

    for(i = 0; i < tamanho_S; i++)
        if(i + tamanho_T <= tamanho_S){
            multiplicador = ceil(pow(10, tamanho_T)) / 10; // Observação no final do código
            sub_conjunto_T = 0;

            for(j = i; j < i + tamanho_T; j++){ 
                sub_conjunto_T += multiplicador * conjunto_S[j];
                multiplicador /= 10;
            }
            sub_conjuntos_T[i] = sub_conjunto_T;
        }

    //lista os conjuntos t e a quantidade de repetições
    bool ja_existe, nao_existe = true;
    int divisor, count = 0;

    for(i = 0; i < tamanho_S; i++){
        count = 0;
        for(j = i; j < tamanho_S; j++)
            if(sub_conjuntos_T[i] == sub_conjuntos_T[j]){
                    count++;
        }

        if(i != 0)
            for(j = i - 1; j > 0; j--)
                    if(sub_conjuntos_T[i] == sub_conjuntos_T[j])
                        ja_existe = true;

        if(count > 1 && !ja_existe){
            divisor = floor(pow(10, tamanho_T)) / 10;
            sub_conjunto_T = sub_conjuntos_T[i];

            while(divisor >= 1){
                printf("%d ", sub_conjunto_T / divisor);
                sub_conjunto_T %= divisor;
                divisor /= 10;
            }
            printf("- %dx\n", count);
                nao_existe = false;
        }
    }
    if(nao_existe)
        puts("Nao existe");
}

//Eu usei a função ceil para arredondar para cima o valor devolvido, pois a função pow estava com problemas.
//Estava sendo devolvido um valor um pouco menor que o resultado deveria ser, acho que o problema está com o tipo
//de parâmetro que a função espera (double) e o que eu estava mandando (int). Pesquisei e vi algumas pessoas com problemas de inconsistencia
// com essa função também, além de outras da lib math.h. De qualquer forma, o código funciona sempre utilizando o ceil para arredondar.