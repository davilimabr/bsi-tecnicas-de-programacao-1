#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void){
    float acres, v_total, v_tipo, v_serv;
    char tipo_pulverizacao;
    bool c_valido;

    while(true){
        puts("Calcular preco pulverizacao                        ");
        puts("Tipo da pulverizacao               Valor           ");
        puts("E - ervas daninhas                 R$ 50,00  / acre");
        puts("G - gafanhotos                     R$ 100,00 / acre");
        puts("B - broca                          R$ 150,00 / acre");
        puts("A - ervas daninhas + gafanhotos    R$ 140,00 / acre");
        puts("F - ervas daninhas + broca         R$ 190,00 / acre");
        puts("H - gafanhotos + broca             R$ 240,00 / acre");
        puts("T - todos                          R$ 270,00 / acre");

        //entrada do tipo de servico
        do{
            c_valido = true;
            puts("Escolha um dos tipos de servico de acordo com a tabela, inserindo a letra correspondente.");
            tipo_pulverizacao = getchar();
            getchar();
            
            switch(toupper(tipo_pulverizacao)){
                case 'E':
                    v_tipo = 50;
                    break;
                case 'G':
                    v_tipo = 100;
                    break;
                case 'B':
                    v_tipo = 150;
                    break;
                case 'A':
                    v_tipo = 140;
                    break;
                case 'F':
                    v_tipo = 190;
                    break;
                case 'H':
                    v_tipo = 240;
                    break;
                case 'T':
                    v_tipo = 270;
                    break;
                default:
                    c_valido = false;
                    break;
            }
        }while(!c_valido);
        system("cls");
    
        //entrada da quantidade de acres
        do{
            puts("Insira a quantidade de acres, que deve ser superior a 0:");
            scanf("%f", &acres);
        }while(acres <= 0);

        v_total = v_serv = v_tipo * acres;

        system("cls");
        printf("O valor total do servico sera de R$%.2f\n", v_serv);

        float desc = 0;
        if(acres > 10){
            desc = v_total * 0.05;    
            v_total = v_total - desc;
            printf("valor do desconto de 05%%:  R$%.2f\n", desc);
        }
        if(v_total > 750){
            desc = (v_total - 750) * 0.1;
            v_total = v_total - desc;
            printf("valor do desconto de 10%% sobre o excedente de R$750: R$%.2f\n", desc);
        }
        if(desc != 0)
            printf("O valor total a pagar (com os descontos) e de R$%.2f\n", v_total);

        //pergunta se o programa continua rodando
        system("pause");
        system("cls");
        int resp;
        do{
            puts("Deseja continuar com o programa? 1 - sim | 2 - nao");
            scanf("%d", &resp);
            getchar();
        }while(resp != 1 && resp != 2);
        
        if(resp == 2)
            break;
        else system("cls");
    }
}