#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>

class Pagamento{

    private:
        double valorPagamento;
        std::string nomeFuncionario;

    public:
        Pagamento();
        double getValorPagamento();
        std::string getNomeFuncionario();
        void setValorPagamento(double valor);
        void setNomeFuncionario(std::string nome);
};

#endif