#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int base, potencia;
    int i, j, count; //contadores

    do{
        puts("digite uma numero para ser a base da potecia de 3");
        scanf("%d", &base);
    }while(base < 1);       

    system("cls");

    if(base == 1){
        printf("%d ao cubo = %d", base, base);
        return 0;
    }
    
    potencia = pow(base, 3);
    int impares[potencia / 2];

    //separa todos os impares entre 0 e base^3
    count = 0;
    for(i = 1; i <= potencia; i++)
        if(i % 2 != 0){
            impares[count] = i;
            count++;
        }   
        

    printf("%d ao cubo = ", base);

    //calcula os resultados possíveis e printa
    int soma;
    int tamanho = potencia / 2;
    for(i = 0; i < tamanho; i++){
        soma = 0;

        if(i + base <= tamanho)
            for(j = i; j < i + base; j++)
                soma += impares[j];

        if(soma == potencia){
            for(j = i; j < i + base; j++){
                printf("%d", impares[j]);
                
                if(j < i + base - 1)
                    printf(" + ");
            }
            break;
        }
    }
}