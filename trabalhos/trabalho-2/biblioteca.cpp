#include <time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <locale.h>

#define NONE   "\033[0m"
#define BOLD   "\033[1m"
#define C_GRAY "\033[37m"

const int PRAZO_DEVOLUCAO = 7;
const int MAX_CARACTERES = 30;
const int TAM_CODIGO = 6 + 1;
const int MAX_USUARIOS = 30;
const int MAX_LIVROS = 30;

struct Data{
    int Dia;
    int Mes;
    int Ano;
    int Hora;
    int Minuto;
    int Segundo;
};

struct Usuario{
    char Cpf[12];
    char Nome[MAX_CARACTERES];
};

struct Livro{
    char Codigo[TAM_CODIGO];
    char Titulo[MAX_CARACTERES];
    char Autor[MAX_CARACTERES];
    int AnoPublicacao;
};

struct Emprestimo{
    Usuario Usuario;
    Livro Livro;
    Data Emprestimo;
    Data Devolucao;
};


//FUNCOES STRING
bool ENumerico(char str[]){
    for(int i = 0; i < strlen(str); i++)
        if(str[i] < 48 || str[i] > 57)
            return false;
    
    return true;
}

void ToUpperStr(char str[]){
    for(int i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
}

//FUNCOES DATA
bool Ebissexto(int ano){
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
        return true;
    else return false;
}

int getQtdDiasData(Data data){
    int somadias = data.Dia - 1; // -1 para desconsiderar o dia 01/01/1600
    int i, j, mes_aux;
    for(i = 1; i <= data.Ano; i++){
        if(i == data.Ano)
            mes_aux = data.Mes - 1;
        else 
            mes_aux = 12;  

        for(j = 1; j <= mes_aux; j++){
            if(j == 2){
                somadias += 28;
                 if(Ebissexto(i))
                    somadias++;
            }
            else if(j <= 7 && j % 2 == 0)
                somadias += 30;
            else if(j > 7 && j % 2 != 0)
                somadias += 30;
            else 
                somadias += 31;
        }
    }
    return somadias;
}

int DiferencaEmDiasEntreDatas(Data inicio, Data fim){
    int inicio_dias = getQtdDiasData(inicio);
    int fim_dias = getQtdDiasData(fim);

    int result;
    if(inicio_dias > fim_dias)
        result = inicio_dias - fim_dias;
    else
        result = fim_dias - inicio_dias;

    return result;
}

bool DataEMaior(Data data1, Data data2){
    if(data1.Ano > data2.Ano)
        return true;
    else if(data1.Ano == data2.Ano && data1.Mes > data2.Mes)
        return true;
    else if(data1.Ano == data2.Ano && data1.Mes == data2.Mes && data1.Dia > data2.Dia)
        return true;  

    return false; 
}   

void IncrementaDiaData(Data &data, int incremento){
    int dias_mes;

    if(data.Mes <= 7 && data.Mes % 2 == 0)
        dias_mes = 30;
    else if(data.Mes > 7 && data.Mes % 2 != 0)
        dias_mes = 30;
    else 
        dias_mes = 31;

    if(data.Dia + incremento <= dias_mes)
        data.Dia += incremento;
    else{
        data.Dia = incremento - (dias_mes - data.Dia);

        if(data.Mes < 12)
            data.Mes++;
        else{
            data.Mes = 1;
            data.Ano++;
        }
    }
}

void data_hora_atual(Data &data_atual) {
    time_t t = time(NULL);
    struct tm lt = *localtime(&t);
    data_atual.Ano = lt.tm_year + 1900;
    data_atual.Mes = lt.tm_mon + 1;
    data_atual.Dia = lt.tm_mday;
    data_atual.Hora = lt.tm_hour;
    data_atual.Minuto = lt.tm_min;
    data_atual.Segundo = lt.tm_sec;
}

bool DataValida(Data data){
    Data data_atual;
    data_hora_atual(data_atual);   
   
    if(data.Ano < 0 || data.Ano > data_atual.Ano)
        return false;
    if(data.Dia < 1 || data.Dia > 31)
        return false;
    if(data.Mes < 1 || data.Mes > 12)
        return false;
    if((data.Mes <= 7 && data.Mes % 2 == 0 && data.Dia == 31) || (data.Mes > 7 && data.Mes % 2 != 0 && data.Dia == 31))
        return false;
    if((Ebissexto(data.Ano) && data.Mes == 2 && data.Dia > 29) || (!Ebissexto(data.Ano) && data.Mes == 2 && data.Dia > 28))
        return false;

    return true;
}

//VALIDADORES
bool CPFUsuarioValido(char cpf[12]){
    return strlen(cpf) == 11 && ENumerico(cpf);
}
bool TextoValido(char nome[MAX_CARACTERES]){
    return strlen(nome) >= 4 && !ENumerico(nome);
}
bool CodigoValido(char codigo[]){
    return strlen(codigo) == 6 && ENumerico(codigo);
}



//FUNCOES EMPRESTIMO
int getQtdEmprestimosCadastrados(Emprestimo emprestimos[]){
    int i = 0;
    while(CPFUsuarioValido(emprestimos[i].Usuario.Cpf))
        i++;
    return i;
}

int BuscaPosicaoEmprestimosPorCPF(Emprestimo emprestimos[], char cpf[12]){
    if(!CPFUsuarioValido(cpf))
       return -1;

    for(int i = 0; i < getQtdEmprestimosCadastrados(emprestimos); i++)
        if(strcmp(emprestimos[i].Usuario.Cpf, cpf) == 0)
            return i;

    return -1;
}

int BuscaPosicaoEmprestimosPorCodigo(Emprestimo emprestimos[], char codigo[TAM_CODIGO]){
    if(!CodigoValido(codigo))
       return -1;

    for(int i = 0; i < getQtdEmprestimosCadastrados(emprestimos); i++)
        if(strcmp(emprestimos[i].Livro.Codigo, codigo) == 0)
            return i;

    return -1;
}

void OrdenarEmprestimosPorCPF(Emprestimo emprestimos[]){
    for(int i = 0; i < getQtdEmprestimosCadastrados(emprestimos)-1;)
        if(strcmp(emprestimos[i].Usuario.Cpf, emprestimos[i+1].Usuario.Cpf) > 0){
            Emprestimo temp = emprestimos[i];
            emprestimos[i] = emprestimos[i+1];
            emprestimos[i+1] = temp;
            i = 0;
        }
        else i++;
}



//FUNCOES USUARIOS
int getQtdUsuariosCadastrados(Usuario usuarios[]){
    int i = 0;
    while(CPFUsuarioValido(usuarios[i].Cpf))
        i++;
    return i;
}

bool UsuarioExiste(Usuario usuarios[], Usuario usuario){
    for(int i = 0; i < MAX_USUARIOS; i++)
        if(strcmp(usuarios[i].Cpf, usuario.Cpf) == 0)
            return true;

    return false;
}

int BuscaPosicaoUsuarioPorCPF(Usuario usuarios[], char cpf[12]){
    if(!CPFUsuarioValido(cpf))
        return -1;

    for(int i = 0; i < getQtdUsuariosCadastrados(usuarios); i++)
        if(strcmp(usuarios[i].Cpf, cpf) == 0)
            return i;

    return -1;
}

bool UsuarioPossuiEmprestimo(Emprestimo emprestimos[], char cpf[12]){
    if(!CPFUsuarioValido(cpf))
       return false;

    for(int i = 0; i < getQtdEmprestimosCadastrados(emprestimos); i++)
        if(strcmp(emprestimos[i].Usuario.Cpf, cpf) == 0)
            return true;

    return false;
}

void OrdenarUsuariosPorCPF(Usuario usuarios[]){
    for(int i = 0; i < getQtdUsuariosCadastrados(usuarios)-1;)
        if(strcmp(usuarios[i].Cpf, usuarios[i+1].Cpf) > 0){
            Usuario temp = usuarios[i];
            usuarios[i] = usuarios[i+1];
            usuarios[i+1] = temp;
            i = 0;
        }
        else i++;
}

int ExcluirUsuario(Usuario usuarios[], Emprestimo emprestimos[], char cpf[12]){
    int posicao = BuscaPosicaoUsuarioPorCPF(usuarios, cpf);
    if(posicao == -1)
        return -1;
    if(UsuarioPossuiEmprestimo(emprestimos, cpf))
        return -2;
    
    int ult_p = getQtdUsuariosCadastrados(usuarios);
    usuarios[posicao] = usuarios[ult_p - 1];

    Usuario usuario_invalido = {" \0", " \0"};
    usuarios[ult_p - 1] = usuario_invalido ; 

    return 0;   
}

int CadastrarUsuario(Usuario usuarios[], char cpf[12], char nome[MAX_CARACTERES]){
    if(!CPFUsuarioValido(cpf))
        return -1;
    if(!TextoValido(nome))
        return -2;
    if(BuscaPosicaoUsuarioPorCPF(usuarios, cpf) > -1)
        return -3;

    int ult_p = getQtdUsuariosCadastrados(usuarios);
    strcpy(usuarios[ult_p].Cpf, cpf);
    
    ToUpperStr(nome); 
    strcpy(usuarios[ult_p].Nome, nome);
    
    return 0;
}



//FUNCOES LIVROS
int getQtdLivrosCadastrados(Livro livros[]){
    int i = 0;
    while(CodigoValido(livros[i].Codigo))
        i++;
    return i;
}

bool AnoValido(int ano){
    return ano >= 1900 && ano <= 2050;
}

int BuscaPosicaoLivroPorCodigo(Livro livros[], char codigo[]){
    if(!CodigoValido(codigo))
        return -1;
    
    for(int i = 0; i < getQtdLivrosCadastrados(livros); i++)
        if(strcmp(livros[i].Codigo, codigo) == 0)
            return i;

    return -1;
}

void OrdenaLivrosPorTitulo(Livro livros[]){
    for(int i = 0; i < getQtdLivrosCadastrados(livros)-1;)
        if(strcmp(livros[i].Titulo, livros[i+1].Titulo) > 0){
            Livro temp = livros[i];
            livros[i] = livros[i+1];
            livros[i+1] = temp;
            i = 0;
        }
        else i++;
}

int CadastrarLivro(Livro livros[], char codigo[TAM_CODIGO], char titulo[MAX_CARACTERES], char autor[MAX_CARACTERES], int ano){
    if(!CodigoValido(codigo))
        return -1;
    if(!TextoValido(titulo) || !TextoValido(autor))
        return -2;
    if(!AnoValido(ano))
        return -3;

    if(BuscaPosicaoLivroPorCodigo(livros, codigo) > -1)
        return -4;

    int ult_p = getQtdLivrosCadastrados(livros);

    ToUpperStr(autor);    
    ToUpperStr(titulo);

    strcpy(livros[ult_p].Codigo, codigo);
    strcpy(livros[ult_p].Titulo, titulo);    
    strcpy(livros[ult_p].Autor, autor);    
    livros[ult_p].AnoPublicacao = ano;

    return 0;
}

bool LivroEmprestado(Emprestimo emprestimos[], char codigo[TAM_CODIGO]){
    if(!CodigoValido(codigo))
        return false;
    
    for(int i = 0; i < getQtdEmprestimosCadastrados(emprestimos); i++)
        if(strcmp(emprestimos[i].Livro.Codigo, codigo) == 0)
            return true;

    return false;
}

int ExcluirLivros(Livro livros[], Emprestimo emprestimos[], char codigo[TAM_CODIGO]){
    int posicao = BuscaPosicaoLivroPorCodigo(livros, codigo);
    if(posicao == -1)
        return -1;
    if(LivroEmprestado(emprestimos, codigo))
        return -2;
    
    int ult_p = getQtdLivrosCadastrados(livros);
    livros[posicao] = livros[ult_p - 1];

    Livro livro_invalido = {" \0", " \0", " \0", 0};
    livros[ult_p - 1] = livro_invalido ; 

    return 0;
}





//OUTRAS FUNCOES EMPRESTIMO
int EmprestarLivro(Emprestimo emprestimos[], Usuario usuarios[], Livro livros[], char cpf[12], char codigo[TAM_CODIGO]){
    if(!CPFUsuarioValido(cpf))
        return -1;
    if(!CodigoValido(codigo))
        return -2;

    int usuario_p = BuscaPosicaoUsuarioPorCPF(usuarios, cpf);
    int livro_p = BuscaPosicaoLivroPorCodigo(livros, codigo);
    int emprest_p = getQtdEmprestimosCadastrados(emprestimos);

    if(usuario_p == -1)
        return -3;
    if(livro_p == -1)
        return -4;

    if(UsuarioPossuiEmprestimo(emprestimos, cpf))
        return -5;
    if(LivroEmprestado(emprestimos, codigo))
        return -6;

    emprestimos[emprest_p].Usuario = usuarios[usuario_p];
    emprestimos[emprest_p].Livro = livros[livro_p];

    data_hora_atual(emprestimos[emprest_p].Emprestimo);
    emprestimos[emprest_p].Devolucao = emprestimos[emprest_p].Emprestimo;
    IncrementaDiaData(emprestimos[emprest_p].Devolucao, 7);

    return 0;
}

int DevolverLivro(Emprestimo emprestimos[], char cpf[12], Data devolucao){
    if(!CPFUsuarioValido(cpf))
        return -1;

    int posicao = BuscaPosicaoEmprestimosPorCPF(emprestimos, cpf);
    if(posicao == -1)
        return -2;

    Data dt_atual;
    data_hora_atual(dt_atual);

    if(!DataValida(devolucao) || !DataEMaior(devolucao, emprestimos[posicao].Emprestimo) || DataEMaior(devolucao, dt_atual) )
        return -3;

    int prazo = DiferencaEmDiasEntreDatas(emprestimos[posicao].Emprestimo, devolucao);
    
    int ult_p = getQtdEmprestimosCadastrados(emprestimos);
    emprestimos[posicao] = emprestimos[ult_p - 1];
    
    Emprestimo emprestimo_invalido = {{" \0", " \0"}, {" \0", " \0", " \0", 0}, {0,0,0,0,0,0}, {0,0,0,0,0,0}};
    emprestimos[ult_p - 1] = emprestimo_invalido;

    return prazo;
}





//MENU USUARIOS
void CadastrarUsuarioMenu(Usuario usuarios[]){
    char cpf[12];
    char nome[MAX_CARACTERES];

    getchar();

    puts("CPF:");
    gets(cpf);
    
    puts("Nome:");
    gets(nome);

    int result = CadastrarUsuario(usuarios, cpf, nome);

    if(result == 0)
        puts("Cadastro realizado com sucesso!");
    else if(result == -1)
        puts("Erro: CPF inválido!");
    else if(result == -2)
        puts("Erro: Nome inválido!");
    else
        puts("Erro: CPF já cadastrado!");
}

void ExcluirUsuarioMenu(Usuario usuarios[], Emprestimo emprestimos[]){
    char cpf[12];

    getchar();

    puts("CPF:");
    gets(cpf);

    int result = ExcluirUsuario(usuarios, emprestimos, cpf);

    if(result == 0)
        puts("Exclusão realizada com sucesso!");
    else if(result == -1)
        puts("Erro: Usuário não cadastrado!");
    else if(result == -2)
        puts("Erro: Usuário possui um empréstimo!");
}

void ListarUsuariosMenu(Usuario usuarios[], Emprestimo emprestimos[]){
    OrdenarUsuariosPorCPF(usuarios);
    for(int i = 0; i < getQtdUsuariosCadastrados(usuarios); i++){
        puts("------------------------------------------------------------------------------------");
        printf("%s%sCPF%s: %s %s%sNome%s: %s\n",  C_GRAY, BOLD, NONE, usuarios[i].Cpf,  C_GRAY, BOLD, NONE, usuarios[i].Nome);

        int result = BuscaPosicaoEmprestimosPorCPF(emprestimos, usuarios[i].Cpf);

        if(result > -1){
            puts("------------------------------------------------------------------------------------");
            printf("%16s %s%sEmprestimo:%s %d/%d/%d a %d/%d/%d\n%16s %s%sTitulo:%s %s\n%16s %s%sAutor:%s %s\n", " ", C_GRAY, BOLD, NONE,
            emprestimos[result].Emprestimo.Dia,
            emprestimos[result].Emprestimo.Mes,
            emprestimos[result].Emprestimo.Ano,
            emprestimos[result].Devolucao.Dia,
            emprestimos[result].Devolucao.Mes,
            emprestimos[result].Devolucao.Ano, " ", C_GRAY, BOLD, NONE,
            emprestimos[result].Livro.Titulo, " ", C_GRAY, BOLD, NONE,
            emprestimos[result].Livro.Autor);
            puts("------------------------------------------------------------------------------------\n\n");
        }
    }
}

void MenuUsuarios(Usuario usuarios[], Emprestimo emprestimos[]){
    int opc;
    while(true){
        puts("Menu do Cadastro de Usuários");
        puts("1-Cadastrar usuário         ");
        puts("2-Excluir usuário           ");
        puts("3-Listar usuários           ");
        puts("4-Voltar                    ");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                system("cls");
                CadastrarUsuarioMenu(usuarios);
                break;
            case 2:
                system("cls");
                ExcluirUsuarioMenu(usuarios, emprestimos);
                break;
            case 3:
                system("cls");
                ListarUsuariosMenu(usuarios, emprestimos);
                break;
            case 4:
                return;
                break;
        }
        system("pause");
        system("cls");
    }
}



//MENU LIVROS
void CadastrarLivroMenu(Livro livros[]){
    char codigo[TAM_CODIGO];
    char titulo[MAX_CARACTERES];
    char autor[MAX_CARACTERES];
    int ano;

    getchar();
    puts("Código: ");
    gets(codigo);

    puts("Título: ");
    gets(titulo);

    puts("Autor: ");
    gets(autor);

    puts("Ano de Publicação: ");
    scanf("%d", &ano);

    int result = CadastrarLivro(livros, codigo, titulo, autor, ano);

    if(result == 0)
        puts("Cadastro realizado com sucesso!");
    else if(result == -1)
        puts("Erro: Código Inválido!");
    else if(result == -2)
        puts("Erro: Título ou autor inválidos!");
    else if(result == -3)
        puts("Erro: Ano Inválido!");
    else
        puts("Erro: Livro já cadastrado!");
}

void ExcluirLivroMenu(Livro livros[], Emprestimo emprestimos[]){
    char codigo[TAM_CODIGO];

    getchar();
    puts("Código: ");
    gets(codigo);

    int result = ExcluirLivros(livros, emprestimos, codigo);

    if(result == 0)
        puts("Exclusão realizada com sucesso!");
    else if(result == -1)
        puts("Erro: Livro não cadastrado!");
    else
        puts("Erro: Livro está emprestado!");
}

void ListarLivrosMenu(Livro livros[], Emprestimo emprestimos[]){
    OrdenaLivrosPorTitulo(livros);
    for(int i = 0; i < getQtdLivrosCadastrados(livros); i++){
        puts("--------------------------------------------------------------------------------------------------------------");
        printf("\n%s%sCódigo:%s %s  %s%sTítulo:%s %-30s  %s%sAutor:%s %-30s  %s%sAno de Publicação:%s %d\n", C_GRAY, BOLD, NONE, 
        livros[i].Codigo,  C_GRAY, BOLD, NONE,
        livros[i].Titulo,  C_GRAY, BOLD, NONE,
        livros[i].Autor,  C_GRAY, BOLD, NONE,
        livros[i].AnoPublicacao);

        int result = BuscaPosicaoEmprestimosPorCodigo(emprestimos, livros[i].Codigo);
        if(result > -1){
            puts("-------------------------------------------------------------------------");
            printf("%14s %s%sEmprestimo:%s %d/%d/%d a %d/%d/%d\n%14s %s%sCPF:%s %s\n%14s %s%sNome:%s %s\n", " ", C_GRAY, BOLD, NONE,
            emprestimos[result].Emprestimo.Dia,
            emprestimos[result].Emprestimo.Mes,
            emprestimos[result].Emprestimo.Ano,
            emprestimos[result].Devolucao.Dia,
            emprestimos[result].Devolucao.Mes,
            emprestimos[result].Devolucao.Ano, " ", C_GRAY, BOLD, NONE,
            emprestimos[result].Usuario.Cpf, " ", C_GRAY, BOLD, NONE,
            emprestimos[result].Usuario.Nome);
            puts("-------------------------------------------------------------------------");
        }
    }
}

void MenuLivros(Livro livros[], Emprestimo emprestimos[]){
    int opc;
    while(true){
        puts("Menu do Cadastro de Livros");
        puts("1-Cadastrar livro         ");
        puts("2-Excluir livro           ");
        puts("3-Listar livros           ");
        puts("4-Voltar                  ");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                system("cls");
                CadastrarLivroMenu(livros);
                break;
            case 2:
                system("cls");
                ExcluirLivroMenu(livros, emprestimos);
                break;
            case 3:
                system("cls");
                ListarLivrosMenu(livros, emprestimos);
                break;
            case 4:
                return;
                break;
        }
        system("pause");
        system("cls");
    }
}



//MENU EMPRESTIMOS
void EmprestarLivroMenu(Emprestimo emprestimos[], Usuario usuarios[], Livro livros[]){
    char cpf[12];
    char codigo[TAM_CODIGO];

    getchar();

    puts("CPF: ");
    gets(cpf);

    puts("Código: ");
    gets(codigo);

    int result = EmprestarLivro(emprestimos, usuarios, livros, cpf, codigo);

    if(result == 0){
        puts("Empréstimo concedido!");
        
        int ult_p = getQtdEmprestimosCadastrados(emprestimos);
        printf("Nome: %s\n", emprestimos[ult_p-1].Usuario.Nome);
        printf("Título: %s\n", emprestimos[ult_p-1].Livro.Titulo);
        printf("Data do empréstimo: %02d/%02d/%d\n", 
        emprestimos[ult_p-1].Emprestimo.Dia,
        emprestimos[ult_p-1].Emprestimo.Mes,
        emprestimos[ult_p-1].Emprestimo.Ano);
        
        printf("Data do devolução: %02d/%02d/%d\n", 
        emprestimos[ult_p-1].Devolucao.Dia,
        emprestimos[ult_p-1].Devolucao.Mes,
        emprestimos[ult_p-1].Devolucao.Ano);
    }
    else if(result == -1)
        puts("Erro: CPF inválido!");
    else if(result == -2)
        puts("Erro: Código inválido!");
    else if(result == -3)
        puts("CPF não cadastrado!");
    else if(result == -4)
        puts("Livro não cadastrado!");
    else if(result == -5)
        puts("CPF já tem um empréstimo!");
    else
        puts("Livro já tem um empréstimo!");
}

void DevolverLivroMenu(Emprestimo emprestimos[]){
    char cpf[12];
    Data devolucao;

    getchar();

    puts("CPF: ");
    gets(cpf);

    puts("Data de devolução: ");
    scanf("%d %d %d", &devolucao.Dia, &devolucao.Mes, &devolucao.Ano);

    int result = DevolverLivro(emprestimos, cpf, devolucao);

    if(result > -1){
        if(result - PRAZO_DEVOLUCAO <= 0)
            puts("Devolução realizada com sucesso no prazo!");
        else
            printf("Devolução realizada com atraso de %d dias!", result - PRAZO_DEVOLUCAO);
    }
    else if(result == -1)
        puts("Erro: usuário não cadastrado!");
    else if(result == -2)
        puts("Erro: usuário não tem empréstimo!");
    else
        puts("Erro: data de devolução inválida!");
}

void ListarEmprestimosMenu(Emprestimo emprestimos[]){
    OrdenarEmprestimosPorCPF(emprestimos);
    
    puts("------------------------------------------------------------------------------------------------------------");
    printf("%s%sCPF         Nome                          Código  Título                     Empréstimo  Devolução%s  \n", C_GRAY, BOLD, NONE);
    puts("------------------------------------------------------------------------------------------------------------");
    
    for(int i = 0; i < getQtdEmprestimosCadastrados(emprestimos); i++){
        printf("%s %-30s %-7s %-30s %02d/%02d/%d %02d/%02d/%d",
        emprestimos[i].Usuario.Cpf,
        emprestimos[i].Usuario.Nome,
        emprestimos[i].Livro.Codigo,
        emprestimos[i].Livro.Titulo,
        emprestimos[i].Emprestimo.Dia,
        emprestimos[i].Emprestimo.Mes,
        emprestimos[i].Emprestimo.Ano,
        emprestimos[i].Devolucao.Dia,
        emprestimos[i].Devolucao.Mes,
        emprestimos[i].Devolucao.Ano);
        puts("\n------------------------------------------------------------------------------------------------------------\n");
    }
}

void MenuEmprestimoeDevolucao(Emprestimo emprestimos[], Usuario usuarios[], Livro livros[]){
    int opc;
    while(true){
        puts("Menu do Empréstimo/Devolução");
        puts("1-Emprestar livro           ");
        puts("2-Devolver livro            ");
        puts("3-Listar empréstimos        ");
        puts("4-Voltar                    ");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                system("cls");
                EmprestarLivroMenu(emprestimos, usuarios, livros);
                break;
            case 2:
                system("cls");
                DevolverLivroMenu(emprestimos);
                break;
            case 3:
                system("cls");
                ListarEmprestimosMenu(emprestimos);
                break;
            case 4:
                return;
                break;
        }
        system("pause");
        system("cls");
    }
}



void setValorDefault(Usuario usuarios[], Livro livros[], Emprestimo emprestimos[]){
    for(int i = 0; i < MAX_USUARIOS; i++)
        strcpy(usuarios[i].Cpf, " \0");
    for(int i = 0; i < MAX_LIVROS; i++)
        strcpy(livros[i].Codigo, " \0");
    for(int i = 0; i < MAX_LIVROS; i++)
        strcpy(usuarios[i].Cpf, " \0");
}
//MAIN
int main(void){
    setlocale(LC_ALL, "Portuguese");

    Usuario Usuarios[MAX_USUARIOS];
    Livro Livros[MAX_LIVROS];
    Emprestimo Emprestimos[MAX_LIVROS];

    setValorDefault(Usuarios, Livros, Emprestimos);

    int opc;
    while(true){
        puts("Menu Principal        ");
        puts("1-Cadastro de usuários");
        puts("2-Cadastro de livros  ");
        puts("3-Empréstimo/devolução");
        puts("4-Fim                 ");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                system("cls");
                MenuUsuarios(Usuarios, Emprestimos);
                break;
            case 2:;
                system("cls");
                MenuLivros(Livros, Emprestimos);
                break;
            case 3:
                system("cls");
                MenuEmprestimoeDevolucao(Emprestimos, Usuarios, Livros);
                break;
            case 4:
                return 0;
                break;
            default:
                system("cls");
                puts("Valor inválido, pressione qualquer tecla para tentar novamente.");
                system("pause");
                break;
        }
        system("cls");
    }
}

