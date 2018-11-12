#ifndef VALIDAR_H
#define VALIDAR_H


#include <QString>

class Validar
{
private:

    bool checarExistencia(QString arquivo, int pos);
public:
    Validar();
    static bool validarCPF(const int * const);
    static int validarCNPJ(QString);
    static int gerarId();
};

#endif // VALIDAR_H
