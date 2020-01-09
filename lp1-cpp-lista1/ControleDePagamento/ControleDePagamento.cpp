#include "ControleDePagamento.h"

ControleDePagamento::ControleDePagamento(){

    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        pay[i].setValorPagamento(0);
        pay[i].setNomeFuncionario(" ");
    }
}

void ControleDePagamento::setPagamentos(std::string nomeFuncionario, double valorPagamento){
    
    int aux = VerificaIndiceDisponivel();

    pay[aux].setNomeFuncionario(nomeFuncionario);
    pay[aux].setValorPagamento(valorPagamento);
}

double ControleDePagamento::calculaTotalDePagamentos(){
    
    double soma = 0;

    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        soma += pay[i].getValorPagamento();
    }

    return soma;
}

bool ControleDePagamento::existePagamentoParaFuncionario (std::string nomeFuncionario){
   
    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        if (pay[i].getNomeFuncionario() == nomeFuncionario)
            return true;
    }
    return false;
}

int ControleDePagamento::VerificaIndiceDisponivel(){
    
    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        if (pay[i].getValorPagamento() == 0)
            return i;
    }
    return 0;
}
