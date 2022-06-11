/*Leia uma matriz quadrada de inteiros m (5 x 5) e verifique se ela é simétrica, ou seja, se os valores
da linha 1 são iguais aos da coluna 1, os da linha 2 são iguais aos da coluna 2, e assim por diante.
Ao final imprimir “É simétrica” ou “Não é simétrica”.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int matriz[5][5];
    int i, j, k;

    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++){
            printf("digite o valor da posicao [%d][%d] da matriz\n", i, j);
            scanf("%d", &matriz[i][j]);
        }

   int coluna[5], linha[5]; 
   bool igual = true;
   for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            linha[j] = matriz[i][j];
        
        for(j = 0; j < 5; j++)
            coluna[j] = matriz[j][i];

        for(j = 0; j < 5; j++)
            if(coluna[j] != linha[j])
                igual = false;
   }

   if(igual)
        puts("E simetrica");
    else 
        puts("Nao e simétrica");
}