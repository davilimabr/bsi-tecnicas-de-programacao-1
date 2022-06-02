#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int base, potencia, *impares;
    int i, j, count; //contadores

    do{
        puts("digite uma numero para ser a base da potecia de 3");
        scanf("%d", &base);
    }while(base < 1);       

    potencia = pow(base, 3);
    impares = (int *) malloc(potencia / 2 * sizeof(int));

    count = 0;
    for(i = 1; i <= potencia; i++)
        if(i % 2 != 0)
        {
            impares[count] = i;
            count++;
        }   
        
    system("cls");
    printf("%d ao cubo = ", base);
    int soma;
    int tamanho = (int) sizeof(impares)/sizeof(int);
    for(i = 0; i < tamanho; i++){
        soma = 0;
        for(j = i; j < i + base; j++)
            soma += impares[j];
        if(soma == potencia){
            for(j = i; j < i + base; j++){
                printf("%d", impares[j]);
                
                if(j < i + base - 1 )
                    printf(" + ");
            }
            break;
        }
    }
}