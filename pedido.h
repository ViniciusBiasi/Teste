#ifndef PEDIDO_H
#define PEDIDO_H
#include<QString>
using namespace std;

class Pedido
{
private:
    int numero;
    int idCliente;
    string status;
    string data;
    float valorTotal;

public:
    Pedido(): numero(0), idCliente(0), status(""), data(""), valorTotal(0) {}

    void setNumero(int numero){this->numero=numero;}
    void setCliente(int idCliente){this->idCliente=idCliente;}
    void setStatus(string status){this->status=status;}
    void setData(string data){this->data=data;}
    void setValorTotal(float valorTotal){this->valorTotal=valorTotal;}

    int getNumero(){return numero;}
    int getCliente(){return idCliente;}
    string getStatus(){return status;}
    string getData(){return data;}
    float getValorTotal(){return valorTotal;}
};

#endif // PEDIDO_H
