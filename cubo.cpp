#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int base, potencia, *impares;
    int i, j; //contadores

    puts("digite uma número para ser a base da potecia de 3");
    scanf("%d", &base);

    potencia = pow(base, 3);

    impares = (int *) malloc(potencia / 2 * sizeof(int));

    j = 0;
    for(i = 1; i <= potencia; i++)
        if(i % 2 != 0)
        {
            impares[j] = i;
            j++;
        }

    // for(i = 0; i < potencia/2; i++)
    //     printf("%d\n", impares[i]);

    int soma;
    for(i = 0; i < potencia/2; i++){
        soma = 0;
        printf("i = %d\n", i);
        for(j = i; j < i + base; j++)
        {
            soma += impares[j];
            printf("%d\n", impares[j]);
        }
            printf("%d\n\n", soma);
        if(soma == potencia){
            for(j = i; j < i + base; j++)
            printf("%d\n", impares[j]);
            break;
        }
    }
      
}