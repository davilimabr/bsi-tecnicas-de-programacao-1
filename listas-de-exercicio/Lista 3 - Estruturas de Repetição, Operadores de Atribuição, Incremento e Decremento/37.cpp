/*Exiba o menu abaixo até o usuário entrar com a opção 4. Para cada item selecionado, leia um
número inteiro n e execute a opção escolhida pelo usuário.
MENU DE OPÇÕES:
1-Verificar se N é primo
2-Verificar se N é perfeito
3-Verificar se N é capicua
4-Sair do programa*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){
    int continua;
    while(true){
        puts("MENU DE OPÇÕES:");
        puts("1-Verificar se N é primo");
        puts("2-Verificar se N é perfeito");
        puts("3-Verificar se N é capicua");
        puts("4-Sair do programa");

        int opc, num;
        bool valido;
        do{
            valido = true;

            puts("escolha: ");
            scanf("%d", &opc);

            switch (opc){
            case 1:
            case 2:
                    puts("digite um numero inteiro");
                    scanf("%d", &num);
                break;
            case 3:
                do{
                    puts("digite um numero inteiro positivo");
                    scanf("%d", &num);
                }while(num < 1);
                break;
            case 4:
                return 0;
                break;
            
            default:
                valido = false;
                break;
            }
        }while(!valido);
        
        int i, soma_div, divisivel;
        system("cls");
        switch (opc){
        case 1:
            divisivel = 0;

            for(i = 1; i <= num; i++)
                if(num % i == 0)
                    divisivel++;

            if(divisivel == 2)
                printf("O numero %d e primo\n", num);
            else
                printf("O numero %d NAO e primo\n", num);
            break;
        case 2:
            soma_div = 0;
            for(i = 1; i < num; i++){
                if(num % i == 0)
                    soma_div += i;
            }

            if(soma_div == num)
                printf("O numero %d e um numero perfeito", num);
            else 
                printf("O numero %d NAO e um numero perfeito", num);
            break;
        case 3:
            int div = 1;
            
            for(i = 10;; i*=10){
                if(num % i != num)
                    div *= 10;
                else break;
            }

            int num_inv = 0, mult = 1, sobra = num;

            for(i = 0; div >= 1; i++, mult *=10, div /= 10){
                num_inv += (sobra / div) * mult;
                sobra %= div;
            }

            if(num_inv == num)
                printf("O numero %d e capicua", num);
            else 
                printf("O numero %d NAO e capicua", num);
            break;
        }
        
        do{
            puts("\n\n\ncontinuar programa? 1 sim - 2 nao");
            scanf("%d", &continua);
        }while(continua != 1 && continua != 2);
        
        if(continua == 2)
            break;
        else 
            system("cls");
    }
}