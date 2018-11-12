#include <string>
#ifndef PESSOA_H_
#define PESSOA_H_
#include<QString>
using namespace std;
class Pessoa {
public:
    Pessoa();
    virtual ~Pessoa();

    int getCodigo() const {
        return codigo;
    }

    void setCodigo(int codigo) {
        this->codigo = codigo;
    }

    std::string getEmail() const {
        return email;
    }

    void setEmail(std::string email) {
        this->email = email;
    }

    std::string getLogradouro() const {
        return logradouro;
    }

    void setLogradouro(std::string logradouro) {
        this->logradouro = logradouro;
    }

    std::string getSetor() const {
        return setor;
    }

    void setSetor(std::string setor) {
        this->setor = setor;
    }
    void setCidade(string cidade){
         this->cidade=cidade;
    }

    void setEstado(string estado){
         this->estado=estado;
   }
    void setTelefone(string telefone){
         this->telefone=telefone;
   }
    std::string getEstado() const{
        return estado;
}

    std::string getCidade() const{
        return cidade;
    }

    std::string getTelefone() const{
        return telefone;
    }

protected:
    int codigo;
    std::string logradouro;
    std::string setor;
    std::string email;
    std::string cidade;
    std::string estado;
    std::string telefone;

};
#endif /* PESSOA_H_ */
