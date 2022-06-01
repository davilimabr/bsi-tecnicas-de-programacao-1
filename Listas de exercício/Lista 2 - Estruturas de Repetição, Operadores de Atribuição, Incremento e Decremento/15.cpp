/*Leia o número do mês do ano (1 a 12) e mostre o nome do mês por extenso. Se o número for
inválido, imprima "Mês inválido".*/

#include <stdio.h>

int main(void) {
    int mes, mes_extenso;
    
    puts("Insira um mês do ano em representação numerica de 1 a 12");
    scanf("%d", &mes);

    printf("O numero %d corresponde ao mesmo de ", mes);
    switch(mes){
        case 1: 
            puts("janeiro");
        break; 
        case 2: 
            puts("fevereiro");
        break; 
        case 3: 
            puts("março");
        break; 
        case 4: 
            puts("abril");
        break; 
        case 5: 
            puts("maio");
        break; 
        case 6: 
            puts("junho");
        break; 
        case 7: 
            puts("julho");
        break; 
        case 8: 
            puts("agosto");
        break; 
        case 9: 
            puts("setembro");
        break; 
        case 10: 
           puts("outubro");
        break; 
        case 11: 
           puts("novembro");
        break; 
        case 12: 
            puts("dezembro");
        break; 
    }
}