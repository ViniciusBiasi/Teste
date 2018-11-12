#include "validar.h"

Validar::Validar()
{

}



bool Validar::validarCPF(const int * const cpf)
{
    int digito1,
        digito2,
        temp = 0;



    for(char i = 0; i < 9; i++)
        temp += (cpf[i] * (10 - i));

    temp %= 11;

    if(temp < 2)
        digito1 = 0;
    else
        digito1 = 11 - temp;



    temp = 0;
    for(char i = 0; i < 10; i++)
        temp += (cpf[i] * (11 - i));

    temp %= 11;

    if(temp < 2)
        digito2 = 0;
    else
        digito2 = 11 - temp;



    if(digito1 == cpf[9] && digito2 == cpf[10])
        return true;
    else
        return false;
}

int Validar::validarCNPJ(QString)
{

}

int Validar::gerarId()
{

}
