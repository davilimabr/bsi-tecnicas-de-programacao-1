#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float acres, v_total, v_serv;
    char tipo_pulverizacao;

    bool continua = true;
    while(continua){
        puts("Calcular preço pulverização                        ");
        puts("Tipo da pulverização               Valor           ");
        puts("E - ervas daninhas                 R$ 50,00  / acre");
        puts("G - gafanhotos                     R$ 100,00 / acre");
        puts("B - broca                          R$ 150,00 / acre");
        puts("A - ervas daninhas + gafanhotos    R$ 140,00 / acre");
        puts("F - ervas daninhas + broca         R$ 190,00 / acre");
        puts("H - gafanhotos + broca             R$ 240,00 / acre");
        puts("T - todos                          R$ 270,00 / acre");

        //escolha do tipo de serviço
        bool c_valido = true;
        do{
            c_valido = true;
            puts("Escolha um dos tipos de serviço de acordo com a tabela, inserindo a letra correspondente.");
            tipo_pulverizacao = getchar();
            getchar();
            switch(toupper(tipo_pulverizacao)){
                case 'E':
                    v_serv = 50;
                    break;
                case 'G':
                    v_serv = 100;
                    break;
                case 'B':
                    v_serv = 150;
                    break;
                case 'A':
                    v_serv = 140;
                    break;
                case 'F':
                    v_serv = 190;
                    break;
                case 'H':
                    v_serv = 240;
                    break;
                case 'T':
                    v_serv = 270;
                    break;
                default:
                    c_valido = false;
                    break;
            }
        }while(!c_valido);

        system("cls");

        //entrada da quantidade de acres
        do{
            puts("Insira a quantidade de acres:");
            scanf("%f", &acres);
        }while(acres <= 0);

        v_total = v_serv * acres;

        if(acres > 10)
            v_total *= 0.95;
        if(v_total > 750)
            v_total = ((v_total - 750) * 0.9) + 750;
    
        system("cls");

        printf("O valor total do serviço sera de R$%.2f\n", v_total);

        //perguntar se programa de continuar rodadando
        int resp;
        do{
            puts("Deseja continuar com o programa? 1 - sim | 2 - não");
            scanf("%d", &resp);
        }while(resp != 1 && resp != 2);
        
        if(resp == 2)
            continua = false;
        else system("cls");
    }
}
