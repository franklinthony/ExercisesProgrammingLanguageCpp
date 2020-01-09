#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEPAGAMENTO_H
#include "Pagamento.h"

#define MAX_PAGAMENTOS 100

class ControleDePagamento{

    private:
        Pagamento pay[MAX_PAGAMENTOS];

    public:
       	ControleDePagamento();
        void setPagamentos(std::string nomeFuncionario, double valorPagamento);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (std::string nomeFuncionario);
        int VerificaIndiceDisponivel();
};

#endif
