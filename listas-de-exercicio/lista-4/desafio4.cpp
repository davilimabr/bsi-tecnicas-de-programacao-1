/*
Leia dois vetores x e w com, respectivamente, n e m números inteiros (n = m ou n != m). Assuma
que o usuário vai digitar os valores de x e w em ordem crescente e pode haver números repetidos
em x e w. Usando intercalação, crie um vetor k ordenado de forma crescente e sem repetição com
os valores de x e w.
*/

#include<stdio.h>

int main(void){
    int tamx, tamw;

    puts("digite o tamanho da sequencia de numeros x");
    scanf("%d", &tamx);

    puts("digite o tamanho da sequencia de numeros w");
    scanf("%d", &tamw);

    int vetx[tamw], vetw[tamw], vetxw[tamx + tamw];
    int cont = 0;
    bool ja_existe;
    
    for(int i= 0; i < tamx; i++){
        printf("x[%d]> ", i);
        scanf("%d", &vetx[i]);

        ja_existe = false;
        
        for(int j = 0; j < i; j++)
            if(vetx[i] == vetxw[j]){
                ja_existe = true;
                break;
            }
            
        if(!ja_existe)
            vetxw[cont++] = vetx[i];
    }

    for(int i= 0; i < tamw; i++){
        printf("w[%d]> ", i);
        scanf("%d", &vetw[i]);

        ja_existe = false;
        for(int j = 0; j < i + tamx -1; j++)
            if(vetw[i] == vetxw[j]){
                ja_existe = true;
                break;
            }
        
        if(!ja_existe)
            vetxw[cont++] = vetw[i];
    }

    for(int i = 0; i < cont-1; i++)
        for(int j = i + 1; j < cont; j++)
            if(vetxw[i] > vetxw[j]){
                int aux = vetxw[i];
                vetxw[i] = vetxw[j];
                vetxw[j] = aux;
            }
    
    for(int i = 0; i < cont; i++)
        printf("%d\n", vetxw[i]);
}

