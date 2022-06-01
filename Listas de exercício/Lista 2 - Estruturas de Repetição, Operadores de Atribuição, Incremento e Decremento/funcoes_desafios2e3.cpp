bool Ebissexto(int ano){
    if(ano % 400 == 0)
        return true;
    else{
        if(ano % 4 == 0 && ano % 100 != 0)
            return true;
        else return false;
    }
}

bool DataValida(int dia, int mes, int ano){
    const int ANO_ATUAL = 2022;
    
    bool valido = true;

    if(ano < 0 || ano > ANO_ATUAL)
        valido = false;
    else{
        if(dia < 1 || dia > 31)
            valido = false;
        else{
            if(mes < 1 || mes > 12)
                valido = false;
            else{
                if((mes <= 7 && mes % 2 == 0 && dia == 31) || (mes > 7 && mes % 2 != 0 && dia == 31))
                    valido = false;
                else{
                    if((Ebissexto(ano) && mes == 2 && dia > 29) || (!Ebissexto(ano) && mes == 2 && dia > 28))
                        valido = false;
                }
            }
        }
    }
    return valido;
}